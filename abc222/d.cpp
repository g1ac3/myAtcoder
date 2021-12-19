#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll MOD = 998244353;
const int M = 3001;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<int> A(N),B(N);
  rep(i,N) cin>>A[i];
  rep(i,N) cin>>B[i];
  vector<vector<ll>> dp(N+1,vector<ll>(M));
  dp[0][0] = 1;
  rep(i,N){
    ll sum = 0;
    rep(j,M){
      sum = (sum+dp[i][j])%MOD;
      if(j<A[i]||B[i]<j) continue;
      dp[i+1][j] = sum;
    }
  }
  /*
  rep(i,N+1){
    rep(j,M) cout<<dp[i][j]<<" ";
    cout<<endl;
  }
  */
  ll ans = 0;
  rep(i,M) ans = (ans+dp[N][i])%MOD;
  cout<<ans<<endl;
}
