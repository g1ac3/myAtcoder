#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
using P = pair<ll,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M,X,Y;
  cin>>N>>M>>X>>Y;
  --X; --Y;
  vector<vector<pair<int,int>>> to(N);
  vector<ll> U(N,1e18);
  vector<int> T(M),K(M);
  rep(i,M){
    int a,b;
    cin>>a>>b>>T[i]>>K[i];
    a--;b--;
    to[a].emplace_back(make_pair(b,i));
    to[b].emplace_back(make_pair(a,i));
  }
  priority_queue<P, vector<P>, greater<P>> q;
  q.push({0,X});
  U[X] = 0;
  while(!q.empty()){
    auto [t,n] = q.top();
    q.pop();
    if(U[n]!=t) continue;
    //printf("%d\n",n);
    for(auto [a,b]:to[n]){
      ll time = T[b]+K[b]*((U[n]+K[b]-1)/K[b]);
      if(U[a]<=time) continue;
      U[a] = time;
      q.push({time,a});
    }
  }
  if(U[Y]==1e18) cout<<"-1";
  else cout<<U[Y];
}
//AC
