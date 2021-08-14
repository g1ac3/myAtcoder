#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
const ll INF = 1e16;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  vector<vector<int>> E(N);
  rep(i,M){
    int a,b;
    cin>>a>>b;
    --a;--b;
    E[a].emplace_back(b);
    E[b].emplace_back(a);
  }
  vector<ll> dp(N,0),dist(N,INF);
  priority_queue<P, vector<P>, greater<P>> q;
  q.push({0,0}); //time ,position
  dp[0] = 1;
  dist[0] = 0;
  while(q.size()){
    auto [t,n] = q.top();q.pop();
    if(dist[n] < t) continue;
    //printf("%d %d\n",t,n);
    for(int x:E[n]){
      if(dist[x] < t+1) continue;
      if(dist[x] == t+1){
        dp[x] = (dp[x]+dp[n])%MOD;
        continue;
      }
      dp[x] = dp[n];
      dist[x] = t+1;
      q.push({t+1,x});
    }
  }
  //for(int i=0;i<N;i++) cout<<dist[i]<<" ";
  if(dist[N-1]==-INF) cout<<"0\n";
  else cout<<dp[N-1]<<"\n";
}
