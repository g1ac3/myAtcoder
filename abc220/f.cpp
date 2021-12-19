#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
vector<P> S1,S2,A;
vector<vector<P>> E;
vector<int> ans,dep;
map<P,int> m;
int N;

int dfs(int pos,int pre){
  int sum = 1;
  for(auto [x,a]:E[pos]){
    if(x==pre) continue;
    sum += dfs(x,pos);
  }
  if(pre!=-1){
    ans[pos] += (N-sum);
    ans[pre] += sum;
    int i = m[{min(pos,pre),max(pos,pre)}];
    //printf("i : %d\n",i);
    for(auto [x,a]:E[pos]){
      if(i==a) continue;
      //printf("++%d %d\n",pos,x);
      int v1 = min(pos,(int)x);
      int v2 = max(pos,(int)x);
      if(pos<x) S2[m[{v1,v2}]].first += (N-sum);
      else S2[m[{v1,v2}]].second += (N-sum);
    }
    for(auto [x,a]:E[pre]){
      if(i==a) continue;
      //printf("--%d %d\n",pre,x);
      int v1 = min(pre,(int)x);
      int v2 = max(pre,(int)x);
      if(pre<x) S2[m[{v1,v2}]].first += sum;
      else S2[m[{v1,v2}]].second += sum;
    }
    dep.emplace_back(i);
  }
  return sum;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin>>N;
  S1.resize(N);
  S2.resize(N);
  A.resize(N);
  E.resize(N);
  ans.resize(N);
  rep(i,N-1){
    int a,b;
    cin>>a>>b;
    --a;--b;
    A[i] = {a,b};
    m[{a,b}] = i;
    E[a].emplace_back(b,i);
    E[b].emplace_back(a,i);
  }
  dfs(0,-1);
  //cout<<"--------\n";
  //for(auto [a,b]:S2) cout<<a<<" "<<b<<endl;
  rep(i,N-1){
    int j = dep[i];
    auto [a,b] = A[j];
    ans[b] += S2[j].first;
    ans[a] += S2[j].second;
    S2[j] = 0;

  }
  rep(i,N-1){
    int j = dep[i];
  }
  rep(i,N) cout<<ans[i]<<endl;
}
/*
5
1 2
1 3
3 4
3 5

*/
