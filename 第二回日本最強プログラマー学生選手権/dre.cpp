#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
ll MOD = 1000000007;
ll a;
ll mycalc(int k){
  if(k==1) return a;
  if(k==0) return 1;
  if(k%2==1) return (mycalc(k-1)*a)%MOD;
  else{
    ll tmp = mycalc(k/2)%MOD;
    return tmp*tmp%MOD;
  }
}
int main(){
  ll N,P;
  cin>>N>>P;
  a = P-1;
  ll ans = a--;
  ans *= mycalc(N-1);
  cout<<ans%MOD;
}
