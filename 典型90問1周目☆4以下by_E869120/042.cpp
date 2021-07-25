#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
ll MOD = 1000000007;
map<ll,ll> memo;
ll calc(ll k){
  if(k == 0) return 1;
  if(k == 1) return 1;
  if(memo.find(k)!=memo.end()) return memo[k];
  ll sum = 0;
  for(int i=1;i<=k&&i<10;i++){
    sum = (sum+calc(k-i))%MOD;
  }
  return memo[k] = sum;
}
int main(){
  ll K;
  cin>>K;
  if(K%9!=0){
    cout<<0;
    return 0;
  }
  cout<<calc(K)<<"\n";
  //for(int i=0;i<=K;i++) cout<<i<<" : "<<memo[i]<<"\n";
}
