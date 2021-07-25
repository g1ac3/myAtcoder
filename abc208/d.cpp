#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
const int INF = 1001001001;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  ll sum = 0;
  cin>>N>>M;
  vector<vector<P>> E(N);
  rep(i,M){
    int a,b,c;
    cin>>a>>b>>c;
    --a;--b;
    E[a].emplace_back(make_pair(b,c));
  }
  for(int k=0;k<N;k++){
    for(int s=0;s<N;s++){
      vector<ll> T(N,INF);
      priority_queue<P, vector<P>, greater<P>> q;
      q.push({0,s});
      T[s] = 0;
      while(!q.empty()){
        auto [t,n] = q.top();q.pop();
        if(t!=T[n])continue;
        for(auto [to,w]:E[n]){
          if(n>k&&s!=n) continue;
          ll time = t + w;
          if(T[to] <= time) continue;
          T[to] = time;
          q.push({time,to});
        }
      }
      rep(i,N)if(T[i]!=INF) sum += T[i];
    }
  }
  cout<<sum;
}
//TLE
