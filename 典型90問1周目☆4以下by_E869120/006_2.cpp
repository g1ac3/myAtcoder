#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  int N,K;
  cin>>N>>K;
  vector<int> S(N);
  for(int i=0;i<N;i++){
    char tmp;
    cin>>tmp;
    S[i] = tmp - 'a';
  }
  for(int x:S) cout<<x<<" ";
  vector<vector<int>> dp(K,vector<int>(N));
  dp[0][0] = S[0];
  for(int i=1;i<N;i++) dp[0][i] = min(dp[0][i-1],S[i]);
  for(int i=1;i<K;i++){
    dp[i][i] = dp[i-1][i-1] + S[i];
    for(int j=i+1;j<N;j++){
      dp[i][j] = min(dp[i-1][j-1]+S[j],dp[i][j-1]);
    }
  }
  cout<<"\n";
  for(int i=0;i<K;i++){
    for(int j=0;j<N;j++){
      printf("%3d",dp[i][j]);
    }
    cout<<"\n";
  }
  int i=K-1,j=N-1;
  vector<char> ans(K);
  while(i>0&&j>=0){
    if(dp[i][j]-dp[i-1][j-1] == S[j]){
      ans[i] = S[j] + 'a';
      i--;j--;
      continue;
    }
    j--;
  }
  while(j>=0){
    if(dp[0][j] == S[j]){
      ans[0] = S[j] + 'a';
      for(char c:ans) cout<<c;
      return 0;
    }
    j--;
  }
}
