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
  vector<ll> T(N);
  vector<vector<int>> E(N);
  rep(i,N){
    int k;
    cin>>T[i]>>k;
    rep(j,k){
      int a;
      cin>>a;
      --a;
      E[i].emplace_back(a);
    }
  }
  queue<int> q;
  vector<bool> used(N);
  q.push(N-1);
  ll ans = 0;
  while(q.size()){
    int n=q.front();q.pop();
    ans += T[n];
    for(int to:E[n]){
      if(used[to]) continue;
      used[to] = true;
      q.push(to);
    }
  }
  cout<<ans<<endl;
}
