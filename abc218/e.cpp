#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<ll,ll>;
#define rep(i,n) for(ll i=0;i<(n);++i)
struct UF{
  vector<ll> uf;
  void init(ll n){
    rep(i,n) uf.emplace_back(-1);
  }
  ll root(ll a){
    if(uf[a]<0) return a;
    else return uf[a] = root(uf[a]);
  }
  bool merge(ll a,ll b){
    ll ah = root(a);
    ll bh = root(b);
    if(ah==bh) return true;
    if(uf[ah]>uf[bh]) swap(ah,bh);
    ll tmp = uf[bh];
    uf[bh] = ah;
    uf[ah] += tmp;
    return false;
  }
};
int main(){
  ll N,M;
  cin>>N>>M;
  vector<P> W;
  vector<ll> F,T;
  ll ans = 0;
  rep(i,M){
    ll a,b,c;
    cin>>a>>b>>c;
    --a;--b;
    F.emplace_back(a);
    T.emplace_back(b);
    W.emplace_back(c,i);
  }
  sort(W.begin(),W.end());
  UF A;
  A.init(N);
  for(auto [a,b]:W) if(A.merge(F[b],T[b])) ans += max(0LL,a);
  cout<<ans<<endl;
}
