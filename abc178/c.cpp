#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  if(N==1){
    cout<<"0";
    return 0;
  }
  ll a=1,b=1,c=1;
  rep(i,N) a = (a*10)%MOD;
  rep(i,N) b = (b*9)%MOD;
  rep(i,N) c = (c*8)%MOD;
  //printf("%lld %lld %lld\n",a,b,c);
  cout<<(a+2*MOD-2*b+c)%MOD;
}
