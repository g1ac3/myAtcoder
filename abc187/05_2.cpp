//#include <iostream>
//#include <vector>
#include <bits/stdc++.h>
using ll = int64_t;
int main(){
  ll N;
  std::cin>>N;
  std::vector<std::pair<ll,ll>> edge(N-1);
  std::vector<std::vector<ll>> g(N);
  for(ll i=0;i<N-1;i++){//入力a,b
    ll a,b;
    std::cin>>a>>b;
    a--;b--;
    g[a].emplace_back(b);
    g[b].emplace_back(a);
    edge[i] = {a,b};
  }
  std::vector<ll> depth(N,-1);
  depth[0]=0;
  std::vector<ll> q={0};
  while(q.size()){
    ll at = q.back();
    q.pop_back();
    for(ll i : g[at]) if(depth[i] == -1){
      depth[i] = depth[at] + 1;
      q.push_back(i);
    }
  }
  std::vector<ll> s(N);
  ll Q;
  std::cin>>Q;
  while(Q--){
    std::cout<<"\n";
    for(ll i : s) std::cout<<i<<" ";
    std::cout<<"\n";
    ll t,e,x;
    std::cin>>t>>e>>x;
    auto [a,b] = edge[e-1];
    if(depth[a]>depth[b]){
      std::swap(a,b);
      t ^= 3;
    }
    if(t==1){
      s[0] += x;
      s[b] -= x;
    }else{
      s[b] += x;
    }
    q = {0};
  }
  while(q.size()){
    ll at = q.back();
    q.pop_back();
    for(ll i : g[at]) if(depth[at] < depth[i]){
      s[i] += s[at];
      q.push_back(i);
    }
  }
  for(ll i : s) std::cout<<i<<"\n";
}
