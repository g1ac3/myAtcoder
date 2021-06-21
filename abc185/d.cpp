#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  ll n,m;
  cin>>n>>m;
  vector<ll> a(m+1);
  for(int i=0;i<m;i++) cin>>a[i];
  a[m] = 0;
  sort(a.begin(),a.end());
  if(a[m] != n) a.emplace_back(n+1);
  //for(ll x : a) cout<<x<<" ";
  ll MIN = INT_MAX;
  for(int i=1;i<a.size();i++){
    if((a[i]-a[i-1]-1) != 0) MIN = min(MIN,a[i]-a[i-1]-1);
  }

  //cout<<MIN<<" ";
  ll ans = 0;
  for(int i=1;i<a.size();i++){
    int tmp = a[i]-a[i-1]-1;
    ans += (tmp+MIN-1)/MIN;
  }
  cout<<ans;
}
