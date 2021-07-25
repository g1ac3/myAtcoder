#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
vector<vector<char>> C;
int H,W,si,sj;
vector<vector<bool>> used;
pair<int,int> dir[4]={{1,0},{0,1},{-1,0},{0,-1}};
int solve(int i,int j){
  //printf("%d %d\n",i,j);
  used[i][j] = true;
  int sum = -100;
  for(auto [a,b]:dir){
    //printf("  %d %d\n",i+a,j+b);
    if(i+a==si&&j+b==sj) sum = 0;
    if(i+a<0||i+a>=H||j+b<0||j+b>=W||C[i+a][j+b]=='#'||used[i+a][j+b]) continue;
    sum = max(sum,solve(i+a,j+b));
  }
  used[i][j] = false;
  //printf("%d %d %d\n",i,j,sum);
  return sum+1;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin>>H>>W;
  C.resize(H);
  used.resize(H);
  rep(i,H){
    C[i].resize(W);
    used[i].resize(W);
    rep(j,W) cin>>C[i][j];
  }
  int MAX = -1;
  rep(i,H) rep(j,W){
    if(C[i][j]=='#')continue;
    si = i;sj = j;
    MAX = max(MAX,solve(i,j));
  }
  if(MAX < 3) cout<<"-1";
  else cout<<MAX;
}
