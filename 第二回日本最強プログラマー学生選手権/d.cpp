#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
ll MOD = 1000000007;
ll a;
map<ll,ll> memo;
ll mycalc(int k){
  if(k==2) return a*a%MOD;
  if(k==1) return a;
  if(memo.find(k) != memo.end()) return memo[k];
  if(k%2==1) return memo[k] = (mycalc(k-1)*a)%MOD;
  else return memo[k] = (mycalc(k/2)*mycalc(k/2))%MOD;
}
int main(){
  ll N,P;
  cin>>N>>P;
  a = P-1;
  ll ans = a--;
  if(N==1){
    cout<<ans;
    return 0;
  }
  ans *= mycalc(N-1);

  cout<<ans%MOD;
}
