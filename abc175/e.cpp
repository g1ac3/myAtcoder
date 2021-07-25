#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll INF = 1e17;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int H,W,K;
  cin>>W>>H>>K;
  vector<vector<ll>> A(H,vector<ll>(W));
  rep(i,K){
    int a,b,c;
    cin>>a>>b>>c;
    --a;--b;
    A[b][a] = c;
  }
  vector<vector<ll>> B(H,vector<ll>(W));
  --H;--W;
  B[H][W] = A[H][W];
  for(int i=W-1;i>=0;i--){
    B[H][i] = B[H][i+1] + A[H][i];
  }
  vector<ll> have;
  for(int i=H-1;i>=0;i--){
    if(have.size()<3){
      B[i][W] = B[i+1][W] + A[i][W];
      have.emplace_back(A[i][W]);
    }else{
      ll MIN = *min_element(have.begin(),have.end());
      for(ll x:have)cout<<x<<" ";
      printf("MIN %d\n",MIN);
      if(A[i][W]>MIN){
        B[i][W] = B[i+1][W] - MIN + A[i][W];
        for(int i=0;i<3;i++) if(MIN == have[i]){
          have[i] = A[i][W];
          break;
        }
      }else{
        B[i][W] = B[i+1][W];
      }
    }
  }

  for(int i=W-1;i>=0;i--){
    have.clear();
    for(int j=H-1;j>=0;j--){
      if(B[j][i+1]>=B[j+1][i]){
        have.clear();
        B[j][i] = B[j][i+1] + A[j][i];
        have.emplace_back(A[j][i]);
        continue;
      }
      if(have.size()<3){
        B[j][i] = B[j+1][i] + A[j][i];
        have.emplace_back(A[j][i]);
      }else{
        ll MIN = *min_element(have.begin(),have.end());
        if(A[j][i]>MIN){
          B[j][i] = B[j+1][i] - MIN + A[j][i];
          for(int k=0;k<3;k++) if(MIN == have[k]){
            have[k] = A[j][i];
            break;
          }
        }else{
          B[j][i] = B[j+1][i];
        }
      }
    }
  }
  /*
  rep(i,H+1){
    rep(j,W+1) cout<<B[i][j]<<" ";
    cout<<"\n";
  }
  */
  cout<<B[0][0]<<"\n";
}//1:
