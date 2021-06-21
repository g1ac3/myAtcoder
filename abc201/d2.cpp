#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int H,W;
vector<vector<char>> A;
vector<vector<ll>> dp(2000,vector<ll>(2000));
int f(int y,int x){
  int p;
  if(A[y][x] == '+') p=1;
  else p=-1;
  if((x+y)%2==0) p*=-1;
  return p;
}
int main(){
  cin>>H>>W;
  A.resize(H);
  for(int i=0;i<H;i++) A[i].resize(W);
  for(int i=0;i<H;i++) for(int j=0;j<W;j++) cin>>A[i][j];
  for(int i=H-1;i>=0;i--){
    for(int j=W-1;j>=0;j--){

      if(i==H-1&&j==W-1) dp[i][j] = 0;
      else if(i==H-1) dp[i][j] = dp[i][j+1]+f(i,j+1);
      else if(j==W-1) dp[i][j] = dp[i+1][j]+f(i+1,j);
      else{
        if((i+j)%2==0) dp[i][j] = max(dp[i][j+1]+f(i,j+1),dp[i+1][j]+f(i+1,j));
        else dp[i][j] = min(dp[i][j+1]+f(i,j+1),dp[i+1][j]+f(i+1,j));
      }
    }
  }/*
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      printf("%3d",dp[i][j]);
    }
    cout<<"\n";
  }
  */
  if(dp[0][0] > 0) cout<<"Takahashi";
  else if(dp[0][0] < 0) cout<<"Aoki";
  else cout<<"Draw";
}
