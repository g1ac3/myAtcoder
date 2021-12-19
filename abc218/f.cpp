#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<ll,ll>;
#define rep(i,n) for(ll i=0;i<(n);++i)
const ll INF = 1e15;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N,M;
  cin>>N>>M;
  vector<vector<ll>> E(N,vector<ll>(M,INF));
  vector<P> FT(M);
  rep(i,M){
    int a,b;
    cin>>a>>b;
    --a;--b;
    FT[i].first=a;
    FT[i].second=b;
    E[a][b] = 1;
  }
  rep(i,N) E[i][i] = 0;
  rep(i,N)rep(j,N)rep(k,N) E[i][j] = min(E[i][j],E[i][k]+E[k][j]);
  for(auto [a,b]:FT){
    ll ans = INF;
    for(ll i=0;i<N;i++){
      if((a==0&&b==i)||(a==i&&b==N-1)) continue;
      ans = min(ans,E[0][i]+E[i][N-1]);
    }
    if(ans==INF) cout<<"-1\n";
    else cout<<ans<<endl;
  }
}
