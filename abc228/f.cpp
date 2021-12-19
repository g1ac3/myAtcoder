#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int H,W,a,b,c,d;
  cin>>H>>W>>a>>b>>c>>d;
  vector<vector<ll>> A(H,vector<ll>(W));
  rep(i,H)rep(j,W) cin>>A[i][j];
  rep(i,H)rep(j,W-1) A[i][j+1] += A[i][j];
  rep(i,W)rep(j,H-1) A[j+1][i] += A[j][i];
  ll TMAX = -1;
  ll AMAX = -1;
  for(int i=0;i<=H-a;i++){
    for(int j=0;j<=W-b;j++){
      ll area = A[i+a-1][j+b-1];
      if(i>0) area -= A[i-1][j+b-1];
      if(j>0) area -= A[i+a-1][j-1];
      if(i>0&&j>0) area += A[i-1][j-1];
      TMAX = max(TMAX,area);
      if(TMAX==area) printf("T %d %d\n",i,j);
    }
  }
  for(int i=0;i<=H-c;i++){
    for(int j=0;j<=W-d;j++){
      ll area = A[i+c-1][j+d-1];
      if(i>0) area -= A[i-1][j+d-1];
      if(j>0) area -= A[i+c-1][j-1];
      if(i>0&&j>0) area += A[i-1][j-1];
      AMAX = max(AMAX,area);
      if(AMAX==area) printf("A %d %d\n",i,j);
    }
  }
  cout<<TMAX-AMAX<<endl;
  /*
  rep(i,H){
    rep(j,W) cout<<A[i][j]<<" ";
    cout<<endl;
  }
  */
}
