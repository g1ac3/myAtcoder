#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const int MOD = 998244353;
const int maxi = 10;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<P> data(N);
  rep(i,N) cin>>data[i].first;
  rep(i,N) cin>>data[i].second;
  sort(data.begin(),data.end());
  vector<int> A(N),B(N);
  rep(i,N) tie(A[i],B[i]) = data[i];
  
  rep(i,N) cout<<A[i]<<" ";
  cout<<"\n";
  rep(i,N) cout<<B[i]<<" ";
  cout<<"\n";

  vector<vector<int>> dp(N+1,vector<int>(maxi));
  dp[0][0] = 1;
  int ans = 0;
  rep(i,N)rep(j,maxi){
    dp[i+1][j] = dp[i][j];
    if(B[i]<=j){
      dp[i+1][j] += dp[i][j-B[i]];
      dp[i+1][j] %= MOD;
    }
    if(j<=A[i]-B[i]){
      ans += dp[i][j];
      ans %= MOD;
    }
  }
  cout<<ans<<endl;
  rep(i,N){
    rep(j,maxi) cout<<dp[i][j]<<" ";
    cout<<"\n";
  }
}
/*
5
3 8 4 9 1
7 6 5 8 5

*/
