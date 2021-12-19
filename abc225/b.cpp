#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<set<int>> E(N);
  rep(i,N-1){
    int a,b;
    cin>>a>>b;
    --a;--b;
    E[a].insert(b);
    E[b].insert(a);
  }
  bool ans=false;
  rep(i,N) if(E[i].size()==N-1) ans = true;
  if(ans) cout<<"Yes\n";
  else cout<<"No\n";
}
