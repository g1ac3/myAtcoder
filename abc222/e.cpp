#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll MOD = 998244353;
const ll S = 1e5+5;
/*1kara*/
vector<vector<P>> E;
vector<vector<vector<int>>> use;
void dfs(int i,int pos,int pre,set<int> D){
  for(auto [x,num]:E[pos]){
    if(x==pre) continue;
    D.insert(num);
    dfs(i,x,pos,D);
    D.erase(num);
  }
  for(int x:D) use[i][pos].emplace_back(x);
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M,K;
  cin>>N>>M>>K;
  vector<int> A(N+1);
  E.resize(N+1);
  rep(i,N) cin>>A[i+1];
  rep(i,N-1){
    int a,b;
    cin>>a>>b;
    E[a].emplace_back(b,i+1);
    E[b].emplace_back(a,i+1);
  }
  use.resize(N+1,vector<vector<int>>(N+1));
  for(int i=1;i<=N;i++){
    set<int> D;
    dfs(i,i,-1,D);
  }
  vector<ll> B(N);
  for(int i=1;i<M;i++){
    int a = A[i];
    int b = A[i+1];
    for(int x:use[a][b]) B[x]++;
  }
  vector<vector<ll>> dp(N,vector<ll>(S));
  dp[0][S] = 1;
  for(ll x:B){
    for(int i=0;i<2*S;i++){

    }
  }
  ll ans = 0;
  for(int i=0;)
  cout<<ans<<endl;
}
