#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int N;
vector<int> C;
vector<vector<int>> path;
vector<int> cnt(100001);
vector<int> ans;

void dfs(int v,int p=-1){
  if(cnt[C[v]] == 0) ans.emplace_back(v+1);
  cnt[C[v]]++;
  for(int a : path[v]){
    if(a == p) continue;
    dfs(a,v);
  }
  cnt[C[v]]--;
}
int main(){
  cin>>N;
  C.resize(N);
  for(int i=0;i<N;i++) cin>>C[i];
  path.resize(N);
  for(int i=0;i<N-1;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    path[a].emplace_back(b);
    path[b].emplace_back(a);
  }
  dfs(0);
  sort(ans.begin(),ans.end());
  for(int a:ans) std::cout<<a<<"\n";
}
