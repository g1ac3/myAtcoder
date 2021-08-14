#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 998244353;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M,K;
  cin>>N>>M>>K;
  vector<vector<int>> E(N);
  rep(i,M){
    int a,b;
    cin>>a>>b;
    --a;--b;
    E[a].emplace_back(b);
    E[b].emplace_back(a);
  }
  rep(i,N){
    E[i].emplace_back(i);
  }
  vector<vector<ll>> dp(K+1,vector<ll>(N));
  dp[0][0] = 1;
  for(int i=0;i<K;i++){
    ll sum = 0;
    for(int j=0;j<N;j++) sum += dp[i][j];
    for(int j=0;j<N;j++){
      dp[i+1][j] = sum;
      for(int x:E[j]){
        dp[i+1][j]-=dp[i][x];
      }
      dp[i+1][j] = dp[i+1][j]%MOD;
    }
  }
  /*
  for(int i=0;i<=K;i++){
    for(int j=0;j<N;j++) cout<<dp[i][j]<<" ";
    cout<<"\n";
  }
  */
  cout<<dp[K][0]<<"\n";
}
