#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<string> sa(N),sb(N);
  rep(i,N){
    string tmp;
    cin>>tmp;
    sa[i] = tmp.substr(0,3);
    sb[i] = tmp.substr(tmp.size()-3,3);
  }
  map<string,int> mp;
  rep(i,N) mp[sa[i]] = 0,mp[sb[i]] = 0;
  int n = 0;
  for(auto& p:mp)p.second = n++;
  vector<vector<int>> E(n);
  vector<int> deg(n);
  rep(i,N){
    int a = mp[sa[i]];
    int b = mp[sb[i]];
    E[b].emplace_back(a);
    deg[a]++;
  }
  queue<int> q;
  vector<int> ans(n);
  rep(i,n){
    if(deg[i] != 0) continue;
    ans[i] = -1;
    q.push(i);
  }
  while(q.size()){
    int v = q.front();q.pop();
    if(ans[v]==-1){
      for(int u:E[v]){
        if(ans[u]) continue;
        ans[u] = 1;
        q.push(u);
      }
    }else{
      for(int u:E[v]){
        if(ans[u]) continue;
        deg[u]--;
        if(deg[u]==0){
          ans[u] = -1;
          q.push(u);
        }
      }
    }
  }
  rep(i,N){
    int a = ans[mp[sb[i]]];
    if(a==-1)cout<<"Takahashi\n";
    else if(a==1)cout<<"Aoki\n";
    else cout<<"Draw\n";
  }
}
