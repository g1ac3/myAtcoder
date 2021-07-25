#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
static const ll MOD = 1000000007;
ll L;
map<ll,ll> memo;
ll calc(ll n){
  if(n == 0) return 1;
  if(n == 1) return 1;
  if(memo.find(n) != memo.end()) return memo[n];
  ll sum = calc(n-1);
  if(n>=L) sum = (sum+calc(n-L))%MOD;
  return memo[n] = sum;
}
int main(){
  ll N;
  cin>>N>>L;
  cout<<calc(N);
}
