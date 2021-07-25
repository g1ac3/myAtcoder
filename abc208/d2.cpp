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
      vector<bool> used(N);
      int cnt = N;
      T[s] = 0;
      while(cnt>0){
        int MIN = INF;
        int n;
        rep(i,N){
          if(used[i]) continue;
          if(MIN>T[i]){
            MIN = T[i];
            n = i;
          }
        }
        for(auto [to,w]:E[n]){
          if(n>k&&s!=n) continue;
          ll time = T[n] + w;
          if(T[to] <= time) continue;
          T[to] = time;
        }
        used[n] = true;
        cnt--;
      }
      rep(i,N)if(T[i]!=INF) sum += T[i];
    }
  }
  cout<<sum;
}
//TLE
