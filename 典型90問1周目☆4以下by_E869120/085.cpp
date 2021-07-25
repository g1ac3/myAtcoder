#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll K;
  cin>>K;
  ll cnt = 0;
  for(ll i=1;i*i*i<=K;i++){
    for(ll j=i;i*j*j<=K;j++){
      if(K%(i*j)==0&&K/(i*j)>=j) cnt++;
    }
  }
  cout<<cnt<<"\n";
}
//AC