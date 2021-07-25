#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

static const ll MOD = 1000000007;

int main(){
  int N;
  cin>>N;
  vector<char> S(N+1);
  for(int i=1;i<N+1;i++) cin>>S[i];
  vector<vector<ll>> dp(N+1,vector<ll>(8));
  string a = " atcoder";
  for(int i=0;i<N+1;i++) dp[i][0] = 1;
  for(int i=1;i<N+1;i++){
    for(int j=1;j<8;j++){
      dp[i][j] = dp[i-1][j];
      if(S[i] == a[j]) dp[i][j] = (dp[i][j]+dp[i-1][j-1])%MOD;
    }
  }
  /*
  for(int i=0;i<N+1;i++){
    for(ll x:dp[i]) printf("%10lld",x);
    cout<<"\n";
  }
  */
  cout<<dp[N][7];
}
