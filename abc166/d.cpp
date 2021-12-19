#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
ll f(ll a,ll b){
  ll a2 = a*a;
  ll a3 = a2*a;
  ll a4 = a3*a;
  ll b2 = b*b;
  ll b3 = b2*b;
  ll b4 = b3*b;
  return a4+a3*b+a2*b2+a*b3+b4;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll X;
  cin>>X;
  vector<ll> ret;
  for(ll i=1;i*i<=X;i++){
    if(X%i==0){
      ret.emplace_back(i);
      if(i*i!=X) ret.emplace_back(X/i);
    }
  }
  for(ll x:ret){
    for(ll i=1;i<1e4;i++){
      ll b = i-x;
      if(f(i,b)==(X/x)){
        printf("%lld %lld\n",i,b);
        return 0;
      }
    }
  }
}
//AC 1:06:17
