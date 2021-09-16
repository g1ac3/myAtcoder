#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const int INF = 1e9;
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
  queue<int> q;
  vector<int> dist(N,INF);
  dist[0]=0;
  q.push(0);

  while(q.size()){
    int n = q.front();q.pop();
    for(int x:E[n]){
      if(dist[x]!=INF) continue;
      dist[x] = n;
      q.push(x);
    }
  }
  cout<<"Yes\n";
  for(int i=1;i<N;i++){
    cout<<dist[i]+1<<"\n";
  }
}
//AC 28:50