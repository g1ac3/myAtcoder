#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ll N,P;
  cin>>N>>P;
  ll sum = P-1;
  ll p = P-2,n=N-1;
  while(n>0){
    if(n%2) sum = (sum*p)%MOD;
    n/=2;
    p = (p*p)%MOD;
  }
  /*
  for(int i=0;(1LL<<i)<N;i++){
    if((n&(1LL<<i))==(1LL<<i)) sum = (sum*p)%MOD;
    p = (p*p)%MOD;
  }
  */
  cout<<sum;
}
