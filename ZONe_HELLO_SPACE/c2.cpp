#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
static const int INF = INT_MAX;
int N;
int M=5;
vector<vector<int>> A;
bool calc(int c){
  vector<int> B(N);
  for(int i=0;i<N;i++){
    for(int j=0;j<5;j++){
      if(A[i][j] >= c) B[i] |= 1<<j;
    }
  }
  sort(B.begin(),B.end());
  B.erase(unique(B.begin(),B.end()),B.end());
  for(int i=0;i<B.size();i++)for(int j=0;j<i+1;j++)for(int k=0;k<i+1;k++){
    if((B[i]|B[j]|B[k]) == (1<<M)-1) return true;
  }
  return false;
}
int main(){
  cin>>N;
  A.resize(N);
  for(int i=0;i<N;i++){
    A[i].resize(M);
    for(int j=0;j<M;j++) cin>>A[i][j];
  }
  int l = 0,r = 1001001001;
  while(l+1 < r){
    int c = (l+r)/2;
    if(calc(c)) l = c;
    else r = c;
  }
  cout<<l;
}
