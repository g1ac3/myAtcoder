#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
int INF = INT_MAX;
int N;
vector<vector<int>> A;
vector<int> B;
vector<vector<int>> X(N);
int calc(){
  int sum = 0;
  for(int i=0;i<N-1;i++){
    for(int y:X[B[i]]) if(y==B[i+1]) return INF;
    sum += A[B[i]][i];
  }
  return sum+A[B[N-1]][N-1];
}
int main(){
  int M;
  cin>>N;
  A.resize(N);
  for(int i=0;i<N;i++) A[i].resize(N);
  for(int i=0;i<N;i++) for(int j=0;j<N;j++) cin>>A[i][j];
  cin>>M;
  X.resize(N);
  for(int i=0;i<M;i++){
    int x,y;
    cin>>x>>y;
    x--;y--;
    X[x].emplace_back(y);
    X[y].emplace_back(x);
  }
  for(int i=0;i<N;i++) B.emplace_back(i);
  int MIN = INF;
  do MIN = min(MIN,calc());
  while(next_permutation(B.begin(),B.end()));
  if(MIN == INF) cout<<"-1";
  else cout<<MIN;
}
