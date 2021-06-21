#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  ll n;
  cin>>n;
  vector<ll> a(n);
  for(ll i=0;i<n;i++) cin>>a[i];
  sort(a.begin(),a.end());
  ll k = -(n-1);
  ll ans = 0;
  for(ll x : a){
    ans += x*k;
    k += 2;
  }
  cout<<ans;
}
