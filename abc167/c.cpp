#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const int INF = 1e9;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M,X;
  cin>>N>>M>>X;
  vector<int> C(N);
  vector<vector<int>> A(N,vector<int>(M));
  rep(i,N){
    cin>>C[i];
    rep(j,M) cin>>A[i][j];
  }
  //copy
  int MIN = INF;
  for(int i=0;i<(1<<N);i++){
    vector<int> B(M);
    int sum = 0;
    for(int j=0;j<N;j++){
      if(i>>j&1){
        sum += C[j];
        rep(k,M) B[k] += A[j][k];
      }
    }
    bool b = true;
    rep(j,M) if(B[j]<X) b = false;
    if(b) MIN =min(MIN,sum);
  }
  if(MIN==INF) cout<<"-1\n";
  else cout<<MIN<<endl;
}
//AC 15:50
