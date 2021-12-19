#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll MOD =998244353;
ll pow(ll a,ll p){
  ll ans = 1;
  ll b = a;
  for(ll j=0;j<64;j++){
    if(p>>j&1) ans = (ans*b)%MOD;
    b = (b*b)%MOD;
  }
  return ans;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<ll> A(N);
  rep(i,N) cin>>A[i];
  multiset<ll> M;
  rep(i,N) M.insert(A[i]);
  ll ans = 0;
  rep(i,N){
    M.erase(M.find(A[i]));
    auto it = M.lower_bound(A[i])
    cout<<*it<<" ";

    //ans = (ans+)%MOD;
  }
  cout<<ans<<endl;
}
