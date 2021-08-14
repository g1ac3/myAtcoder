#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
int N;
int ans = 0;
vector<string> S;
set<vector<bool>> used;
vector<int> dx{0,0,1,-1};
vector<int> dy{1,-1,0,0};
int dfs(int k){
  if()
}
int main(){
  int K;
  cin>>N>>K;
  S.resize(N);
  rep(i,N)cin>>S[i];
  rep(i,N)rep(j,N){
    if(S[i][j]=='#') continue;
    S[i][j] = '#';
    ans += dfs(K-1);
    S[i][j] = '.'
  }
  cout<<ans<<"\n";
}
