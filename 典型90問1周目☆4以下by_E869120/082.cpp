#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
const ll G = 10;
ll lpow(int a){
  ll ans = 1;
  for(int i=0;i<a;++i) ans*=G;
  return ans;
}
int digit(ll a){
  int c = 0;
  while(a>0){
    a/=10;
    c++;
  }
  return c;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll L,R;
  cin>>L>>R;
  int ld = digit(L);
  int rd = digit(R);
  // cout<<ld<<" "<<rd<<"\n";
  //const int M = 19;
  ll sum = 0;
  /*
  for(int i=0;i<M;i++){
    if(i+1<ld) continue;
    if(i+1>rd) continue;
    ll s = lpow(i),f=lpow(i+1)-1;
    if(i+1==ld) s = L;
    if(i+1==rd) f = R;
    ll a = (f+s)%MOD;
    ll b = (f-s+1)%MOD;
    a = (a*b/2)%MOD;
    sum = (sum + (i+1)*a)%MOD;
    //printf("%lld %lld %lld\n",s,f,sum);
  }
  */
  ll g = 1,tmp = 2;
  for(int i=0;(1<<i)<(MOD-2);i++){
    if((1<<i)&(MOD-2)) g = (g*tmp)%MOD;
    tmp = (tmp*tmp)%MOD;
  }
  for(int i=ld;i<=rd;i++){
    ll s = lpow(i-1),f=lpow(i)-1;
    if(i==ld) s = L;
    if(i==rd) f = R;
    ll a = (f+s)%MOD;
    ll b = (f-s+1)%MOD;
    a = (((a*b)%MOD)*g)%MOD;
    sum = (sum + i*a)%MOD;
    //printf("%lld %lld %lld\n",s,f,sum);
  }
  cout<<sum%MOD;
}
