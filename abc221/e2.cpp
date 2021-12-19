#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll MOD =998244353;
/*
ll pow(ll a,ll p){
  ll ans = 1;
  ll b = a;
  for(ll j=0;j<64;j++){
    if(p>>j&1) ans = (ans*b)%MOD;
    b = (b*b)%MOD;
  }
  return ans;
}
*/
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<ll> A(N);
  rep(i,N) cin>>A[i];
  map<int,int> M1;
  rep(i,N){
    M1[A[i]] = i;
  }
  sort(A.begin(),A.end());
  for(int x:A) cout<<M1[x]<<" ";

  //cout<<ans<<endl;
}
