#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
const string C ="-chokudai";
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S;
  cin>>S;
  S = "^"+S;
  int N = (int)S.size();
  int M =(int)C.size();
  vector<vector<ll>> dp(M,vector<ll>((int)S.size()+1));
  dp[0][0] = 1;
  for(int i=1;i<M;i++){
    int sum = 0;
    for(int j=0;j<N;j++){
      if(C[i]==S[j]){
        dp[i][j] = sum;
      }
      sum = (sum +dp[i-1][j])%MOD;
    }
  }
  /*
  for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
      cout<<dp[i][j]<<" ";
    }
    cout<<"\n";
  }
  */
  ll ans = 0;
  for(int i=0;i<N;i++) if(S[i]=='i') ans = (ans+dp[M-1][i])%MOD;
  cout<<ans<<"\n";
}
