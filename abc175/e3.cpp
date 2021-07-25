#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
#define chmax(x,y) x = max(x,y)
static const ll INF = 1e16;

int main(){
  int H,W,K;
  cin>>H>>W>>K;
  vector<vector<ll>> A(H,vector<ll>(W));
  rep(i,K){
    int a,b,c;
    cin>>a>>b>>c;
    A[a-1][b-1] = c;
  }
  ll dp[H+2][W+2][4];
  rep(i,H)rep(j,W)rep(k,4) dp[i][j][k] = -INF;
  dp[0][0][0] = 0;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      for(int k=2;k>=0;k--){
        //if(dp[i][j][k] == -INF) continue;
        dp[i][j][k+1] = max(dp[i][j][k+1],dp[i][j][k]+A[i][j]);
      }
      for(int k=0;k<4;k++){
        //if(dp[i][j][k] == -INF) continue;
        dp[i+1][j][0] = max(dp[i+1][j][0],dp[i][j][k]);
        dp[i][j+1][k] = max(dp[i][j+1][k],dp[i][j][k]);
      }
    }
  }
  ll ans = 0;
  /*
  for(int k=0;k<4;k++){
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++) cout<<dp[i][j][k]<<" ";
      cout<<"\n";
    }
  }
  */
  rep(i,4) chmax(ans,dp[H-1][W-1][i]);
  //rep(i,4) cout<<dp[H-1][W-1][i]<<" ";
  cout<<ans<<"\n";
}
