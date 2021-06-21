#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
  int N,K;
  cin>>N>>K;
  vector<vector<ll>> A(N,vector<ll>(N));
  rep(i,N)rep(j,N)cin>>A[i][j];
  ll l=0,r=1000000001;
  while(r-l>1){
    ll c=(r+l)/2;
    vector<vector<int>> B(N+1,vector<int>(N+1));
    //cout<<"==========="<<l<<" "<<r<<" "<<c<<" \n";
    rep(i,N) rep(j,N) if(A[i][j]>=c) B[i+1][j+1]=1;
    /*
    rep(i,N+1){
      rep(j,N+1) cout<<B[i][j]<<" ";
      cout<<"\n";
    }
    */
    rep(i,N+1) rep(j,N) B[i][j+1] += B[i][j];
    rep(i,N+1) rep(j,N) B[j+1][i] += B[j][i];
    bool t=false;
    for(int i=N;i>=K;i--){
      for(int j=N;j>=K;j--){
        if(B[i][j]-B[i-K][j]-B[i][j-K]+B[i-K][j-K]<((K*K)/2)+1) t=true;
      }
    }
    if(t) r=c;
    else l=c;
  }
  cout<<l;
}
