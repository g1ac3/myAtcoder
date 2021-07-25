#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
  int H,W,MAX = 0;
  cin>>H>>W;
  vector<vector<int>> P(H,vector<int>(W));
  rep(i,H) rep(j,W) cin>>P[i][j];
  for(int i=1;i<(1<<H);i++){
    vector<int> A(H*W+2);
    for(int j=0;j<W;j++){
      int mem = -1;
      int sum = 0;
      bool t = true;
      for(int k=0;k<H;k++){
        if(!((1<<k)&i)) continue;
        if(mem!=-1&&mem!=P[k][j]) t = false;
        mem = P[k][j];
        sum++;
      }
      if(t) A[mem] += sum;
    }
    /*
    for(int x:A) cout<<x<<" ";
    cout<<"\n";
    */
    sort(A.begin(),A.end());
    MAX = max(MAX,A[A.size()-1]);
  }
  cout<<MAX;
}
