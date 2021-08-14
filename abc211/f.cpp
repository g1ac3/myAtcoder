#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const int M = 100005;
vector<vector<int>> A(M,vector<int>(M));
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N;
  rep(i,N){
    cin>>M;
    rep(j,M){
      cin>>x>>y;
      if(j%2==0){
        A[y][x]++;
      }else{
        A[y][x]--;
      }
    }
  }
  for(int i=0;i<M;i)
}
