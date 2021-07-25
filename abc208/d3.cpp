#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
const int INF = 1001001001;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  vector<vector<int>> C(N,vector<int>(N,INF));
  rep(i,N) C[i][i] = 0;
  rep(i,M){
    int a,b,c;
    cin>>a>>b>>c;
    --a;--b;
    C[a][b] = c;
  }
  ll sum = 0;
  for(int k=0;k<N;k++){
    for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
        C[i][j] = min(C[i][j],C[i][k]+C[k][j]);
        if(C[i][j] != INF) sum += C[i][j];
      }
    }
  }
  cout<<sum;
}
//_AC
