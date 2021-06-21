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
  vector<vector<ll>> dpx(H,(vector<ll>(W)));
  vector<vector<ll>> dpy(H,(vector<ll>(W)));
  vector<vector<ll>> dpxy(H,(vector<ll>(W)));
  dp[H-1][W-1] = 1;

  for(int i=H-1;i>=0;i--){
    for(int j=W-1;j>=0;j--){
      if(s[i][j]=='#') continue;
      dp[i][j] += (dpx[i][j]%MOD + dpy[i][j]%MOD + dpxy[i][j]%MOD)%MOD;
      if(j!=0) dpx[i][j-1] = dpx[i][j]+dp[i][j];
      if(i!=0) dpy[i-1][j] = dpy[i][j]+dp[i][j];
      if(i!=0&&j!=0) dpxy[i-1][j-1] = dpxy[i][j]+dp[i][j];
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
