#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
ll MOD = 1000000009;
int main(){
  int H,W;
  cin>>H>>W;
  vector<vector<char>> s(H,(vector<char>(W)));
  for(int i=0;i<H;i++) for(int j=0;j<W;j++) cin>>s[i][j];
  vector<vector<ll>> dp(H,(vector<ll>(W)));
  dp[H-1][W-1] = 1;
  queue<pair<int,int>> q;
  if(s[H-1][W-2] != '#') q.push(pair<int,int>(H-1,W-2));
  if(s[H-2][W-1] != '#') q.push(pair<int,int>(H-2,W-1));
  while(!q.empty()){
    pair<int,int> a = q.front();
    if(dp[a.first][a.second] != 0) continue;
    for(int i=a.first+1;i<H;i++){
      if(s[i][a.second] == '#') break;
      dp[a.first][a.second] += dp[i][a.second]%MOD;
    }
    for(int i=a.second+1;i<W;i++){
      if(s[a.first][i] == '#') break;
      dp[a.first][a.second] += dp[a.first][i]%MOD;
    }
    int i=a.first+1,j=a.second+1;
    while(i<H&&j<W&&(s[i][j]!='#')){
      dp[a.first][a.second] += dp[i][j]%MOD;
      i++;j++;
    }
    q.pop();
  }
}
//WA?
