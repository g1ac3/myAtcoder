#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll MOD = 998244353;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<int> A(N);
  rep(i,N) cin>>A[i];
  vector<vector<ll>> dp(N,vector<ll>(10));
  dp[0][A[0]]++;
  for(int i=1;i<N;i++){
    for(int j=0;j<10;j++){
      dp[i][(j+A[i])%10] = (dp[i][(j+A[i])%10]+dp[i-1][j])%MOD;
      dp[i][(j*A[i])%10] = (dp[i][(j*A[i])%10]+dp[i-1][j])%MOD;
    }
  }
  rep(i,10) cout<<dp[N-1][i]<<endl;
}
