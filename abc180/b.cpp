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
  ll M=0,E=0,C=0;
  rep(i,N){
    ll x;
    cin>>x;
    M += abs(x);
    E += (x*x);
    C = max(C,abs(x));
  }
  printf("%lld\n%.15f\n%lld",M,sqrt(E),C);
}
//AC
