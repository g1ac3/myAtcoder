#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
ll MOD = 1000000007;
int main(){
  int H,W;
  cin>>H>>W;
  vector<vector<char>> s(H,(vector<char>(W)));
  for(int i=0;i<H;i++) for(int j=0;j<W;j++) cin>>s[i][j];
  vector<vector<ll>> dp(H,(vector<ll>(W)));
  dp[H-1][W-1] = 1;

  for(int i=H-1;i>=0;i--){
    for(int j=W-1;j>=0;j--){
      if(s[i][j]=='#') continue;
      int a = j+1;
      while(a<W&&(s[i][a]=='.')){
        dp[i][j] += dp[i][a]%MOD;
        a++;
      }
      a = i+1;
      while(a<H&&(s[a][j]=='.')){
        dp[i][j] += dp[a][j]%MOD;
        a++;
      }
      a = i+1;
      int b = j+1;
      while(a<H&&b<W&&(s[a][b]=='.')){
        dp[i][j] += dp[a][b]%MOD;
        a++; b++;
      }
    }
  }
  cout<<dp[0][0]<<"\n";
  /*
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      printf("%11lld",dp[i][j]);
    }
    cout<<"\n";
  }
  */
}
//WA?
