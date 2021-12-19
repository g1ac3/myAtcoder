#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll MOD = 998244353;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N,D;
  cin>>N>>D;
  vector<ll> f(N+1),g(N+1),two(N+1);
  two[0] = 1;
  rep(i,N) two[i+1] = (2*two[i])%MOD;
  for(int i=1;i<=N;i++){
    int l = i-1;
    int r = D-l;
    ll leaf = 0;
    if(0<=r&&r<=i-1){
      leaf = (two[max(l-1,0)]*two[max(r-1,0)])%MOD;
      if(l!=r) leaf = (leaf*2)%MOD;
    }
    g[i] = (g[i-1] + leaf)%MOD;
  }
  for(int i=1;i<=N;i++){
    f[i] = (f[i-1]*2+g[i])%MOD;
  }
  cout<<(f[N]*2)%MOD<<endl;
}
