#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
int H,W,N,M;
vector<vector<int>> A;
bool calc(int i,int j){
  for(int a=1;j+a<W;a++){
    if(A[i][j+a] == 1) return true;
    else if(A[i][j+a] == -1) break;
  }
  for(int a=1;j>=a;a++){
    if(A[i][j-a] == 1) return true;
    else if(A[i][j-a] == -1) break;
  }
  for(int a=1;i+a<H;a++){
    if(A[i+a][j] == 1) return true;
    else if(A[i+a][j] == -1) break;
  }
  for(int a=1;i>=a;a++){
    if(A[i-a][j] == 1) return true;
    else if(A[i-a][j] == -1) break;
  }
  return false;
}
int main(){
  cin>>H>>W>>N>>M;
  A.resize(H);
  for(int i=0;i<H;i++) A[i].resize(W);
  for(int i=0;i<N;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    A[a][b] = 1;
  }
  for(int i=0;i<M;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    A[a][b] = -1;
  }
  int cnt = 0;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if(A[i][j] == 1) cnt++;
      else if(A[i][j] == -1) continue;
      else if(calc(i,j)) cnt++;
      //printf("%d,%d %d\n",i,j,cnt);
    }
  }
  cout<<cnt;
}
