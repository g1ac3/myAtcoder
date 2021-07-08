#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
using P=pair<ll,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
const ll INF = 1e10;
vector<P> A;
vector<int> B;
vector<bool> used;
vector<vector<int>> to;
ll MAX = -INF;
void dfs(ll x,int n){
  if(x!=B[n]) MAX = max(MAX,B[n]-x);
  for(int next:to[n]){
    if(used[next]) continue;
    used[next] = true;
    dfs(x,next);
  }
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  A.resize(N);
  used.resize(N);
  to.resize(N);
  rep(i,N){
    cin>>A[i].first;
    A[i].second = i;
    B.emplace_back(A[i].first);
  }
  rep(i,M){
    int x,y;
    cin>>x>>y;
    --x;--y;
    to[x].emplace_back(y);
  }
  sort(A.begin(),A.end());
  for(auto [x,i]:A){
    if(used[i]) continue;
    dfs(x,i);
  }
  cout<<MAX<<"\n";
}
