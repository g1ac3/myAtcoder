#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
int N,M,X,Y;
vector<vector<pair<int,int>>> to;
vector<ll> U;
vector<int> T,K;
void dfs(int n,ll t){
  U[n] = t;
  for(auto [a,b]:to[n]){
    ll time = T[b]+K[b]*((t+K[b]-1)/K[b]);
    if(U[a]<time) continue;
    dfs(a,time);
  }
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin>>N>>M>>X>>Y;
  to.resize(N);
  T.resize(M);
  K.resize(M);
  U.resize(N,1e18);
  rep(i,M){
    int a,b;
    cin>>a>>b>>T[i]>>K[i];
    a--;b--;
    to[a].emplace_back(make_pair(b,i));
    to[b].emplace_back(make_pair(a,i));
  }
  dfs(X-1,0);
  if(U[Y-1]==1e18) cout<<"-1";
  else cout<<U[Y-1];
}
//WA TLE RE
