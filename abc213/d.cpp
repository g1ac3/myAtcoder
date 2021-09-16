#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int N;
vector<vector<int>> E;
vector<int> dist;
int num = 1;
void dfs(int n){
  cout<<n+1<<" ";
  dist[n] = num;
  num++;
  for(int x:E[n]){
    if(dist[x]!=0) continue;
    dfs(x);
    cout<<n+1<<" ";
  }
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin>>N;
  E.resize(N);
  dist.resize(N);
  rep(i,N-1){
    int a,b;
    cin>>a>>b;
    --a;--b;
    E[a].emplace_back(b);
    E[b].emplace_back(a);
  }
  rep(i,N) sort(E[i].begin(),E[i].end());
  dfs(0);
}
