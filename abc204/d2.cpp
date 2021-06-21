#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
vector<ll> T;
int main(){
  ll N;
  cin>>N;
  T.resize(N);
  rep(i,N) cin>>T[i];
  bitset<100001> dp;
  dp[0] = 1;
  int sum = 0;
  rep(i,N){
    sum += T[i];
    dp |= dp<<T[i];
  }
  sum = (sum+1)/2;
  rep(i,100001){
    //cout<<sum+i<<" "<<dp[sum+i]<<"\n";
    if(dp[sum+i]){
      cout<<sum+i;
      return 0;
    }
  }
}
