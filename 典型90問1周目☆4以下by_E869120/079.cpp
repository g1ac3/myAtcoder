#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int H,W;
  cin>>H>>W;
  vector<vector<int>> A(H,vector<int>(W)),B(H,vector<int>(W));
  rep(i,H)rep(j,W)cin>>A[i][j];
  rep(i,H)rep(j,W)cin>>B[i][j];
  ll sum = 0;
  rep(i,H-1)rep(j,W-1){
    int d = B[i][j]-A[i][j];
    A[i][j+1] += d;
    A[i+1][j] += d;
    A[i+1][j+1] += d;
    sum += abs(d);
  }
  bool b =true;
  rep(i,H){
    if(A[i][W-1]!=B[i][W-1]) b = false;
  }
  rep(i,W-1){
    if(A[H-1][i]!=B[H-1][i]) b = false;
  }
  if(!b){
    cout<<"No\n";

  }else{
    cout<<"Yes\n";
    cout<<sum;
  }
}
//AC
