#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

static const ll MOD = 1000000007;

int main(){
  ll N,B,K;
  cin>>N>>B>>K;
  vector<int> C(K);
  for(int i=0;i<K;i++) cin>>C[i];
  vector<vector<ll>> dp(N,(vector<ll>(B)));
  for(int i=0;i<K;i++) dp[0][C[i]%B]++;
  for(int i=1;i<N;i++){
    for(int k=0;k<K;k++){
      for(int j=0;j<B;j++) dp[i][(j*10+C[k])%B] = (dp[i][(j*10+C[k])%B]+dp[i-1][j])%MOD;
    }
  }
  // for(int i=0;i<N;i++){
  //   for(int j=0;j<B;j++) printf("%5lld",dp[i][j]);
  //   cout<<"\n";
  // }
  cout<<dp[N-1][0];
}
