#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll INF = 1e17;

int main(){
  int H,W;
  ll C,MIN=INF;
  cin>>H>>W>>C;
  vector<vector<ll>> A(H,vector<ll>(W)),dp(H,vector<ll>(W,INF)),dp2(H,vector<ll>(W,INF));
  rep(i,H)rep(j,W)cin>>A[i][j];
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      ll a=INF,b=INF;
      if(i!=0) a = dp[i-1][j];
      if(j!=0) b = dp[i][j-1];
      dp[i][j] = min(min(a,b),A[i][j]-C*(i+j));
      //printf("%d %d %d\n",i,j,A[i][j]+C*(i+j)+min(a,b));
      MIN = min(MIN,A[i][j]+C*(i+j)+min(a,b));
      //cout<<MIN<<"\n";
    }
  }
  /*
  cout<<"-----------\n";
  rep(i,H){
    rep(j,W)cout<<dp[i][j]<<" ";
    cout<<"\n";
  }
  cout<<"-----------\n";
  */
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      ll a=INF,b=INF;
      if(i!=0) a = dp2[i-1][j];
      if(j!=0) b = dp2[i][j-1];
      dp2[i][j] = min(min(a,b),A[i][W-j-1]-C*(i+j));
      //printf("%d %d %d\n",i,j,A[i][W-j-1]+C*(i+j));
      MIN = min(MIN,A[i][W-j-1]+C*(i+j)+min(a,b));
      //cout<<MIN<<"\n";
    }
  }
  /*
  cout<<"-----------\n";
  rep(i,H){
    rep(j,W)cout<<dp2[i][j]<<" ";
    cout<<"\n";
  }
  cout<<"-----------\n";
  */
  cout<<MIN<<"\n";
}
