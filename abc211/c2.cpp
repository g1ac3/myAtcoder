#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
const string C ="chokudai";
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S;
  cin>>S;
  int N = (int)S.size();
  int M =(int)C.size();
  vector<vector<ll>> dp(M+1,vector<ll>((int)S.size()+1));
  dp[0][0] = 1;
  for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
      if(C[i]==S[j]){
        dp[i+1][j+1] = dp[i][j]+1;
      }else{
        dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
      }
    }
  }
  for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
      cout<<dp[i][j]<<" ";
    }
    cout<<"\n";
  }
  cout<<dp[M-1][N-1];
}
