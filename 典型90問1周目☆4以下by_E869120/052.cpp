#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
static const ll MOD = 1000000007;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ll N;
  cin>>N;
  ll ans = 1;
  ll in;
  rep(i,N){
    ll sum = 0;
    rep(j,6){
      cin>>in;
      sum += in;
    }
    ans = (ans*sum)%MOD;
  }
  cout<<ans;
}
