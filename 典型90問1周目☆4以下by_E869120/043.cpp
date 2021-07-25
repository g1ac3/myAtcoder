#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
int H,W;
ll INF = 1ll<<62;
vector<vector<char>> S;
vector<vector<ll>> dp;
vector<pair<int,int>> di={{1,0},{0,1},{-1,0},{0,-1}};
void f(int y,int x,int t){
  //printf("%d %d %d\n",y,x,t);
  for(int i=0;i<4;i++){
    int ny = y+di[i].first;
    int nx = x+di[i].second;
    if(0>ny||0>nx||ny>=H||nx>=W||S[ny][nx]=='#') continue;
    ll tmp = dp[ny][nx];
    //printf("  %d %d %d %d %lld\n",i,t,1<<i,t&(1<<i),tmp);
    if((t&(1<<i))==(1<<i)) dp[ny][nx] = min(dp[ny][nx],dp[y][x]);
    else dp[ny][nx] = min(dp[ny][nx],dp[y][x]+1);
    //printf("     %lld %lld\n",dp[y][x],dp[ny][nx]);
    if(tmp != dp[ny][nx]) f(ny,nx,(1<<i));
  }
}
int main(){
  cin>>H>>W;
  int rs,cs,rt,ct;
  cin>>rs>>cs>>rt>>ct;
  rs--;cs--;rt--;ct--;
  S.resize(H);
  dp.resize(H);
  for(int i=0;i<H;i++){
    S[i].resize(W);
    dp[i].resize(W);
    for(int j=0;j<W;j++){
      cin>>S[i][j];
      if(S[i][j]=='.') dp[i][j] = INF;
      else dp[i][j] = -1;
    }
  }
  dp[cs][rs] = 0;
  f(cs,rs,15);
  /*
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      printf("%3lld",dp[i][j]);
    }
    std::cout<<"\n";
  }
  */
  cout<<dp[ct][rt];
}
//cs rs
