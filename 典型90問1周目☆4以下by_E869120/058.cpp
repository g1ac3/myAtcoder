#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD =100000;
int main(){
  ll N,K;
  vector<ll> A(MOD,-1);
  cin>>N>>K;
  A[N] = K;
  while(K--){
    //printf("%lld \n",N);
    ll x=0,y=N;
    while(y>0){
      x += (y%10);
      y /= 10;
    }
    N = (N+x)%MOD;
    if(A[N]!=-1){
      K = K%(A[N]-K);
    }
    A[N] = K;
  }
  cout<<N;
}
