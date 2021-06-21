#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int INF = 1<<31;
int H,W;
int si,sj,gi,gj;
vector<vector<ll>> dp;
vector<vector<char>> a;
void calc(int i,int j){
  if(i+1<H){
    if(a[i+1][j] == '.')
  }
}
int main(){
  cin>>H>>W;
  dp.resize(H);
  for(int i=0;i<H;i++) dp[i].resize(W);
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      dp[i][j] = -1;
      cin>>a[i][j];
      if(a[i][j] == 'G'){
        gi = i;
        gj = j;
        dp[i][j] = 0;
      }else if(a[i][j] == 'S'){
        si = i;
        sj = j;
        dp[i][j] = -1;
      }
    }
  }
  calc(gi,gj);
}
