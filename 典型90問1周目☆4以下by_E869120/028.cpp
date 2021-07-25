#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
int L = 1000;
int main(){
  int N;
  cin>>N;
  vector<vector<int>> A(1001,vector<int>(1001));
  vector<int> tmp(4);
  for(int i=0;i<N;i++){
    for(int j=0;j<4;j++) cin>>tmp[j];
    A[tmp[1]][tmp[0]]++;
    A[tmp[3]][tmp[2]]++;
    A[tmp[1]][tmp[2]]--;
    A[tmp[3]][tmp[0]]--;
  }
  for(int i=0;i<L-1;i++){
    for(int j=0;j<L;j++){
      A[j][i+1] += A[j][i];
    }
  }
  for(int i=0;i<L-1;i++){
    for(int j=0;j<L;j++){
      A[i+1][j] += A[i][j];
    }
  }
  vector<int> ans(N+1);
  for(int i=0;i<L;i++){
    for(int j=0;j<L;j++){
      ans[A[i][j]]++;
    }
  }
  for(int i=1;i<=N;i++) cout<<ans[i]<<"\n";
}
