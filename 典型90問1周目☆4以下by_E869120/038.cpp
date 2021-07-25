#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;

int main(){
  ll POW18 = 1000000000000000000LL;
  ll a,b;
  cin>>a>>b;
  ll ans = b/__gcd(a,b);
  if(ans > POW18/a) cout<<"Large";
  else cout<<ans*a;
}
