#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int MOD = 7;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  vector<vector<int>> B(N,vector<int>(M));
  rep(i,N)rep(j,M) cin>>B[i][j];
  bool ans = true;
  rep(i,N){
    for(int j=1;j<M;j++){
      if(B[i][j]!=B[i][j-1]+1) ans = false;
      if((B[i][j]-1)%MOD<=(B[i][j-1]-1)%MOD) ans = false;
    }
  }
  rep(j,M){
    for(int i=1;i<N;i++){
      if(B[i][j]!=B[i-1][j]+7) ans = false;
      if(B[i][j]<B[i-1][j]) ans = false;
    }
  }
  if(ans) cout<<"Yes\n";
  else cout<<"No\n";
}
