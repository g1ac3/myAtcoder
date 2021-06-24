#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<pair<int,int>> A;
  rep(i,N){
    int x,y;
    cin>>x>>y;
    A.emplace_back(make_pair(x,y));
  }
  for(int i=0;i<N-2;i++){
    for(int j=i+1;j<N-1;j++){
      int dx = A[i].first-A[j].first;
      int dy = A[i].second-A[j].second;
      for(int k=j+1;k<N;k++){
        int nx = A[i].first-A[k].first;
        int ny = A[i].second-A[k].second;
        if(dy*nx==dx*ny){
          cout<<"Yes";
          return 0;
        }
      }
    }
  }
  cout<<"No";
}
//AC
