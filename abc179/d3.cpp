#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 998244353;

int main(){
  int N,K;
  cin>>N>>K;
  vector<int> L(K),R(K);
  vector<ll> dp(N),sum(N);
  rep(i,K) cin>>L[i]>>R[i];
  dp[0]=1;
  sum[0]=1;
  for(int i=1;i<N;i++){
    //for(ll x:sum) cout<<x<<" ";
    //cout<<"\n";
    for(int j=0;j<K;++j){
      //printf("  %lld %lld %lld\n",dp[i],i-L[j],i-R[j]-1);
      ll S = 0;
      if(i>=L[j]) S = sum[i-L[j]]+MOD;
      if(i>=R[j]+1) S -= sum[i-R[j]-1];
      //if(i>=L[j]&&i>=R[j]+1)printf("   %lld %lld %lld\n",S,sum[i-L[j]],sum[i-R[j]-1]);
      dp[i] = (dp[i]+S)%MOD;
      /*
      if(i-L[j]<0) continue;
      dp[i] = (dp[i]+sum[i-L[j]])%MOD;
      printf("    %lld %lld\n",dp[i],sum[i-L[j]]);
      if(i-R[j]-1<0) continue;
      dp[i] = (dp[i]-sum[i-R[j]-1])%MOD;
      printf("    %lld %lld\n",dp[i],sum[i-R[j]-1]);
      */
    }
    sum[i] = (sum[i-1] + dp[i])%MOD;
    //printf("%lld %lld %lld\n",dp[i],sum[i],i);
  }
  cout<<dp[N-1]%MOD;
}
//AC
