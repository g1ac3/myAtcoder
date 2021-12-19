#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll MOD = 998244353;
vector<vector<int>> E;
vector<bool> used;
int loop = 0;
bool ok = true;
void dfs(int pos,int pre){
  //printf("pos : %d\n",pos);
  used[pos] = true;
  for(int x:E[pos]){
    if(x==pre) continue;
    if(used[x]){
      loop++;
      continue;
    }
    if(E[x].size()==1&&E[pos].size()==1){
      ok = false;
      continue;
    }
    dfs(x,pos);
  }
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  E.resize(N);
  used.resize(N);
  rep(i,M){
    int a,b;
    cin>>a>>b;
    --a;--b;
    E[a].emplace_back(b);
    E[b].emplace_back(a);
  }
  ll ans = 1;
  rep(i,N){
    loop = 0;
    ok = true;
    if(used[i]) continue;
    dfs(i,-1);
    //cout<<ok<<" "<<loop<<endl;
    if(ok&&loop==2) ans = (ans*2)%MOD;
    else ans = 0;
  }
  cout<<ans<<endl;
}

/*
3 2
1 2
2 3

3 3
*/
