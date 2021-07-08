#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<ll,ll>;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll INF = 1001001001;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<P> A(N+1,{INF,-INF});
  vector<bool> B(N+1);
  rep(i,N){
    ll x,c;
    cin>>x>>c;
    c--;
    B[c] = true;
    A[c].first = min(A[c].first,x);
    A[c].second = max(A[c].second,x);
  }
  A[N] = {0,0};
  B[N] = true;
  //rep(i,N+1) cout<<A[i].first<<" "<<A[i].second<<"\n";
  //vector<vector<ll>> dp(N+1,vector<ll>(2));
  vector<ll> dp(2,0);
  P pre = {0,0};
  vector<ll> d(2);
  for(int i=0;i<=N;i++){
    if(B[i]){
      swap(d,dp);
      dp[0] = abs(A[i].first-A[i].second) + min(d[0]+abs(A[i].second-pre.first),d[1]+abs(A[i].second-pre.second));
      dp[1] = abs(A[i].first-A[i].second) + min(d[0]+abs(A[i].first-pre.first),d[1]+abs(A[i].first-pre.second));
      pre = A[i];
    }
  }
  cout<<dp[0];
}
//
