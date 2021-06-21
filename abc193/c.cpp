#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
ll mypow(ll a,ll b){
  ll ans = 1;
  for(int i = 0;i<b;i++) ans *= a;
  //printf("%lld %lld %lld\n",a,b,ans);
  return ans;
}
int main(){
  ll n;
  cin>>n;
  unordered_set<ll> s;
  ll tmp;
  for(ll a=2;a<=sqrt(n);a++){
    ll b = 2;
    while((tmp = pow(a,b)) <= n){
      //printf("%lld %lld\n",a,b);
      s.insert(tmp);
      b++;
    }
  }
  cout<<n-s.size();
}
