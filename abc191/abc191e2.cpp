#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll INF = 1e17;

int main(){
  int N,M;
  cin>>N>>M;
  vector<vector<pair<int,int>>> E(N),F(N);
  vector<ll> A(N,INF);
  rep(i,M){
    ll a,b,c;
    cin>>a>>b>>c;
    --a;--b;
    if(a==b) A[a]=min(A[a],c);
    else{
      E[a].emplace_back(b,c);
      F[b].emplace_back(a,c);
    }
  }
  rep(i,N){
    priority_queue<P,vector<P>,greater<P>> q;
    vector<ll> dist(N,INF),dist2(N,INF);
    q.push({0,i});
    dist[i] = 0;
    while(q.size()){
      auto [t,n] = q.top();q.pop();
      if(dist[n]<t) continue;
      for(auto [x,c]:E[n]){
        if(dist[x]<=t+c) continue;
        dist[x] = t+c;
        q.push({t+c,x});
      }
    }
    q.push({0,i});
    dist2[i] = 0;
    ll MIN = INF;
    while(q.size()){
      auto [t,n] = q.top();q.pop();
      if(dist2[n]<t) continue;
      for(auto [x,c]:F[n]){
        if(dist2[x]<=t+c) continue;
        dist2[x] = t+c;
        MIN = min(MIN,dist[x]+dist2[x]);
        q.push({t+c,x});
      }
    }
    ll ans = min(MIN,A[i]);
    if(ans == INF) cout<<"-1\n";
    else cout<<ans<<"\n";
  }
}
