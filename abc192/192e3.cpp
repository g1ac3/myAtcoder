#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
using P = pair<ll,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

struct Edge{
  int to,t,k;
  Edge(int to,int t,int k): to(to), t(t), k(k) {}
};
int main(){
  int N,M,X,Y;
  cin>>N>>M>>X>>Y;
  --X; --Y;
  vector<vector<Edge>> g(N);
  rep(i,M){
    int a,b,t,k;
    cin>>a>>b>>t>>k;
    a--;b--;
    g[a].emplace_back(b,t,k);
    g[b].emplace_back(a,t,k);
  }
  const ll INF = 1e18;
  vector<ll> dist(N,INF);
  priority_queue<P, vector<P>, greater<P>> q;
  auto push = [&](ll x,int v){
    //printf("push : %d %d\n",dist[v],x);
    if ( dist[v] <= x) return;
    dist[v] = x;
    q.emplace(x,v);
  };
  push(0,X);
  dist[X] = 0;
  while(!q.empty()){
    auto [x,v] = q.top();
    q.pop();
    if(dist[v]!=x)continue;
    //printf("%d %d\n",x,v);
    for(Edge& e:g[v]){
      ll time = e.t+e.k*((x+e.t-1)/e.k);
      push(time,e.to);
      //printf("  %d %d\n",e.to,time);
    }
    //cout<<"qsize : "<<q.size()<<" \n";
  }
  if(dist[Y]==1e18) cout<<"-1";
  else cout<<dist[Y];
}
//TLE WA
