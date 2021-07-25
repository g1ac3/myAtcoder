#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll INF = 1e17;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  vector<vector<ll>> dp(N,vector<ll>(N,INF));
  rep(i,M){
    ll a,b,c;
    cin>>a>>b>>c;
    --a;--b;
    dp[a][b] = min(dp[a][b],c);
  }
  for(int k=0;k<N;k++){
    for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
        dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j]);
      }
    }
  }
  rep(i,N){
    ll ans = dp[i][i];
    if(ans == INF) cout<<"-1\n";
    else cout<<ans<<"\n";
  }
}//TLE
