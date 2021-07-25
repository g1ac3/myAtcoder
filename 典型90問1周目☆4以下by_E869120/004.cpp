#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  int H,W;
  cin>>H>>W;
  vector<vector<int>> A(H,(vector<int>(W)));
  vector<int> hsum(W),wsum(H);
  for(int i=0;i<H;i++)for(int j=0;j<W;j++){
    cin>>A[i][j];
    wsum[i]+=A[i][j];
    hsum[j]+=A[i][j];
  }
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cout<<wsum[i]+hsum[j]-A[i][j]<<" ";
    }
    cout<<"\n";
  }
}
