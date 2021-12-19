#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll MOD = 998244353;
ll mypow(ll b,ll a){
  ll ans = 1;
  for(ll j=0;j<64;j++){
    if(a>>j&1) ans = (ans*b)%MOD;
    b = (b*b)%MOD;
  }
  return ans;
}
ll inv(ll a){
  ll ans = 1;
  ll b = a;
  ll p = MOD - 2;
  for(ll j=0;j<64;j++){
    if(p>>j&1) ans = (ans*b)%MOD;
    b = (b*b)%MOD;
  }
  return ans;
}
ll nCk(ll n,ll k){
  ll ans = 1;
  for(ll i=n;i>=n-k+1;i--) ans = (ans*i)%MOD;
  for(ll i=2;i<=k;i++) ans = (ans*inv(i))%MOD;
  //printf("nCk %lld %lld %lld\n",n,k,ans);
  return ans;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N,M,K;
  cin>>N>>M>>K;
  ll ans = 0;
  for(ll k=0;k<=K;k++){
    ans = (ans+((nCk(N-1,k)*M)%MOD*mypow(M-1,N-k-1))%MOD)%MOD;
    //cout<<ans<<endl;
  }
  cout<<ans<<endl;
}
