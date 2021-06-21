#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
ll N,K;
vector<vector<ll>> A;
bool calc(ll a){
  vector<vector<ll>> G(N+1,vector<ll>(N+1,0));
  for(int i=1;i<N+1;i++)for(int j=1;j<N+1;j++) G[i][j] = G[i][j-1] + (A[i-1][j-1] > a ? 1 : 0);
  for(int i=1;i<N+1;i++)for(int j=1;j<N+1;j++) G[i][j] += G[i-1][j];
  /*
  cout<<"\n";
  rep(i,N+1){
    cout<<"  ";
    rep(j,N+1) printf("%3d",G[i][j]);
    cout<<"\n";
  }
  for(int i=0;i<N+1-K;i++){
    for(int j=0;j<N+1-K;j++) printf("%3lld",G[i][j]+G[i+K][j+K]-G[i][j+K]-G[i+K][j]);
    cout<<"\n";
  }
  */
  for(int i=0;i<N+1-K;i++)for(int j=0;j<N+1-K;j++) if(G[i][j]+G[i+K][j+K]-G[i][j+K]-G[i+K][j]<K*K/2+1) return true;
  return false;
}
int main(){
  cin>>N>>K;
  A.resize(N);
  unordered_set<ll> S;
  rep(i,N){
    A[i].resize(N);
    rep(j,N)cin>>A[i][j];
  }
  ll ac=1001001001,wa=-1;
  while(wa+1<ac){
    ll wj = (wa+ac)/2;
    //printf("%lld %lld %lld %lld\n",l,r,c,B[c]);
    if(calc(wj)) ac=wj;
    else wa=wj;
  }
  cout<<ac;
}
