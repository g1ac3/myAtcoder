#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int H,W;
  cin>>H>>W;
  vector<vector<int>> A(H,vector<int>(W));
  rep(i,H)rep(j,W) cin>>A[i][j];
  bool ans = true;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      for(int a=i+1;a<H;a++){
        for(int b=j+1;b<W;b++){
          if(A[i][j]+A[a][b]>A[a][j]+A[i][b]) ans = false;
        }
      }
    }
  }
  if(ans) cout<<"Yes\n";
  else cout<<"No\n";
}
