#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int H,W;
vector<vector<char>> A;
vector<vector<ll>> dp(2000,vector<ll>(2000));
void solve(int x,int y,bool t){
  printf("%d %d %d\n",x,y,t);
  int p;
  if(A[y][x] == '+') p=1;
  else p = -1;
  if(!t) p*=-1;
  if(x==0&&y==0) dp[y][x] = 0;
  else if(x==0) dp[y][x] = dp[y-1][x]+p;
  else if(y==0) dp[y][x] = dp[y][x-1]+p;
  else{
    if(t) dp[y][x] = max(dp[y-1][x],dp[y][x-1])+p;
    else dp[y][x] = min(dp[y-1][x],dp[y][x-1])+p;
  }
  if(x+1<W) solve(x+1,y,!t);
  if(y+1<H) solve(x,y+1,!t);
}
int main(){
  cin>>H>>W;
  A.resize(H);
  for(int i=0;i<H;i++) A[i].resize(W);
  for(int i=0;i<H;i++) for(int j=0;j<W;j++) cin>>A[i][j];
  solve(0,0,true);
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      printf("%3d",dp[i][j]);
    }
    cout<<"\n";
  }
  cout<<dp[H][W];
}
