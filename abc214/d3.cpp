#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<ll,ll>;
#define rep(i,n) for(int i=0;i<(n);++i)
vector<ll> UF;
int Utop(ll a){
  if(UF[a]<0) return a;
  else return UF[a] = Utop(UF[a]);
}
void Umer(ll a,ll b){
  if(a==b) return;
  if(UF[a]<UF[b]){
    ll t = UF[b];
    UF[b] = a;
    UF[a] += t;
  }else{
    ll t = UF[a];
    UF[a] = b;
    UF[b] += t;
  }
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N;
  cin>>N;
  vector<P> A,B;
  UF.resize(N,-1);
  rep(i,N-1){
    ll a,b,c;
    cin>>a>>b>>c;
    --a;--b;
    A.emplace_back(a,b);
    B.emplace_back(c,i);
  }
  sort(B.begin(),B.end());
  ll ans = 0;
  for(auto [c,i]:B){
    auto [a,b] = A[i];
    ll ah = Utop(a);
    ll bh = Utop(b);
    ans += UF[ah]*UF[bh]*c;
    Umer(ah,bh);
  }
  cout<<ans<<"\n";
}
