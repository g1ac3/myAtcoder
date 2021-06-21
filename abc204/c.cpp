#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
vector<vector<ll>> P;
vector<bool> used;
ll calc(ll f){
  ll sum = 1;
  used[f] = true;
  //printf("%lld\n",f);
  for(ll x:P[f]){
    if(used[x]) continue;
    sum += calc(x);
  }
  return sum;
}
int main(){
  ll N,M;
  cin>>N>>M;
  P.resize(N);
  rep(i,M){
    ll a,b;
    cin>>a>>b;
    a--;b--;
    P[a].emplace_back(b);
  }
  ll sum = 0;
  rep(i,N){
    used.clear();
    used.resize(N);
    sum += calc(i);
  }
  cout<<sum;
}
