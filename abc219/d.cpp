#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<ll,ll>;
#define rep(i,n) for(ll i=0;i<(n);++i)
const ll Z = 301;
const ll INF = 1e17;
void chmin(ll& a,ll b){a=min(a,b);}
int main(){
  ll N,X,Y;
  cin>>N>>X>>Y;
  vector<P> A(N);
  rep(i,N) cin>>A[i].first>>A[i].second;
  vector<vector<ll>> dp(Z,vector<ll>(Z,INF));
  dp[0][0] = 0;
  for(auto [a,b]:A){
    vector<vector<ll>> dp2(Z,vector<ll>(Z,INF));
    rep(i,Z)rep(j,Z){
      if(dp[i][j]==INF) continue;
      chmin(dp2[i][j],dp[i][j]);
      chmin(dp2[min(i+a,Z-1)][min(j+b,Z-1)],min(dp[min(Z-1,i+a)][min(Z-1,j+b)],dp[i][j]+1));
    }
    swap(dp2,dp);
  }
  /*
  rep(i,20){
    rep(j,20){
      if(dp[i][j]==INF) cout<<" -1";
      else  printf("%3d",dp[i][j]);
    }
    cout<<"\n";
  }
  */
  ll ans = INF;
  for(ll i=X;i<Z;i++){
    for(ll j=Y;j<Z;j++) chmin(ans,dp[i][j]);
  }
  if(ans==INF) cout<<"-1\n";
  else cout<<ans<<endl;
}
/*
5
10 10
1 1
2 2
3 3
4 4
5 5

5
10 10
5 5
4 4
3 3
2 2
1 1

*/
