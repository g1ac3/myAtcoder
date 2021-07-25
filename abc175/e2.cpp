#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll INF = 1e17;

int main(){
  int H,W,K;
  cin>>H>>W>>K;
  vector<vector<ll>> A(H,vector<ll>(W));
  rep(i,K){
    int a,b,c;
    cin>>a>>b>>c;
    --a;--b;
    A[a][b] = c;
  }
  vector<vector<ll>> B(H,vector<ll>(W));
  vector<ll> have(2);
  for(int i=0;i<W;i++){
    if(i==0){
      B[0][i] = A[0][i];
      have.emplace_back(A[0][i]);
      continue;
    }
    ll MIN = *min_element(have.begin(),have.end());
    // for(ll x:have)cout<<x<<" ";
    // printf("MIN %d  %d\n",MIN,A[0][i]);
    if(A[0][i]>MIN){
      B[0][i] = B[0][i-1] - MIN + A[0][i];
      for(int k=0;k<3;k++) if(MIN == have[k]){
        have[k] = A[0][i];
        break;
      }
    }else{
      B[0][i] = B[0][i-1];
    }
  }

  for(int i=1;i<H;i++){
    have.clear();
    have.resize(2);
    for(int j=0;j<W;j++){
      // printf("%d %d\n",i,j);
      if(j==0){
        B[i][j] = A[i][j] + B[i-1][j];
        have.emplace_back(A[i][j]);
        continue;
      }
      if(B[i-1][j]>=B[i][j-1]){
        have.clear();
        have.resize(2);
        B[i][j] = B[i-1][j] + A[i][j];
        have.emplace_back(A[i][j]);
        continue;
      }
      ll MIN = *min_element(have.begin(),have.end());
      if(A[i][j]>MIN){
        B[i][j] = B[i][j-1] - MIN + A[i][j];
        for(int k=0;k<3;k++) if(MIN == have[k]){
          have[k] = A[i][j];
          break;
        }
      }else{
        B[i][j] = B[i][j-1];
      }
    }
  }
  /*
  rep(i,H){
    rep(j,W) cout<<B[i][j]<<" ";
    cout<<"\n";
  }
  */
  cout<<B[H-1][W-1]<<"\n";
}//1:42:00
