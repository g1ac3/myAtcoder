#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int S;
  cin>>S;
  vector<ll> dp(S+1);
  ll sum = 0;
  dp[0] = 1;
  for(int i=3;i<=S;++i){
    sum = (sum+dp[i-3])%MOD;
    dp[i] = sum;
  }
  cout<<dp[S];
}
//AC
