#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,Q;
  cin>>N>>Q;
  vector<vector<int>> E(N);
  rep(i,N-1){
    int a,b;
    cin>>a>>b;
    --a;--b;
    E[a].emplace_back(b);
    E[b].emplace_back(a);
  }
  const int INF = 100;
  vector<int> dist(N,INF);
  queue<P> q;
  dist[0]=0;
  q.push({0,0});
  while(!q.empty()){
    auto [n,t] = q.front();q.pop();
    for(int x:E[n]){
      if(dist[x]!=INF) continue;
      dist[x] = (t+1)%2;
      q.push({x,(t+1)%2});
    }
  }
  while(Q--){
    int c,d;
    cin>>c>>d;
    --c;--d;
    if(dist[c]==dist[d]) cout<<"Town\n";
    else cout<<"Road\n";
  }
}
