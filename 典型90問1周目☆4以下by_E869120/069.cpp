#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ll N,K;
  cin>>N>>K;
  if((N>2&&K<3)||(N<3&&N>K)){
    cout<<"0";
    return 0;
  }
  ll sum = 1;
  for(int i=0;i<2&&i<N;i++) sum = (sum*(K-i))%MOD;
  ll n = N-2;
  ll k = K-2;
  for(int i=0;(1LL<<i)<n;i++){
    if((n&(1LL<<i))==(1LL<<i)) sum = (sum*k)%MOD;
    k = (k*k)%MOD;
  }
  cout<<sum;
}
