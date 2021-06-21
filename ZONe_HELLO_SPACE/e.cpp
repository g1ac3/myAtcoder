#include<bits/stdc++.h>

using namespace std;
using ll = int64_t;
static const ll INF = 1ll<<62;
int R,C;
vector<vector<int>> A;
vector<vector<int>> B;
vector<vector<ll>> dp;

void calc(int x,int y,ll c){
  //printf("%d %d %d %d\n",x,y,c,dp[y][x]);
  if(dp[y][x] > c) dp[y][x] = c;
  else return;
  if(x>0) calc(x-1,y,c+A[y][x-1]);
  if(x<C-1) calc(x+1,y,c+A[y][x]);
  if(y<R-1) calc(x,y+1,c+B[y][x]);
  for(int i=0;i<y;i++) calc(x,i,c+1+y-i);
}
int main(){
  cin>>R>>C;
  A.resize(R);
  B.resize(R-1);
  dp.resize(R);
  for(int i=0;i<R;i++) A[i].resize(C-1);
  for(int i=0;i<R-1;i++) B[i].resize(C);
  for(int i=0;i<R;i++) dp[i].resize(C);
  for(int i=0;i<R;i++) for(int j=0;j<C;j++) dp[i][j] = INF;
  for(int i=0;i<R;i++)for(int j=0;j<C-1;j++) cin>>A[i][j];
  for(int i=0;i<R-1;i++)for(int j=0;j<C;j++) cin>>B[i][j];
  calc(0,0,0);
  /*
  for(int i=0;i<R;i++){
    for(int j=0;j<C;j++) printf("%3lld",dp[i][j]);
    cout<<"\n";
  }
  */
  cout<<dp[R-1][C-1];
}
