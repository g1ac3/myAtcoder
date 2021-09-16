#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<ll,ll>;
#define rep(i,n) for(int i=0;i<(n);++i)
vector<vector<P>> E;
vector<int> A;
int dfs(int n,int p){
  int sum = 1;
  for(auto [x,c]:E[n]){
    if(x==p) continue;
    sum += dfs(x,n);
  }
  A[n] = sum;
  return sum;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  E.resize(N);
  A.resize(N);
  rep(i,N-1){
    ll a,b,c;
    cin>>a>>b>>c;
    --a;--b;
    E[a].emplace_back(b,c);
    E[b].emplace_back(a,c);
  }
  dfs(0,-1);
  rep(i,N) cout<<A[i]<<" ";
  ll ans = 0;

  cout<<ans<<"\n";
}
