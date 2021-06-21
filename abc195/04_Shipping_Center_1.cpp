#include <bits/stdc++.h>

using ll = int64_t;

int main(){
  ll n,m,q;
  std::cin>>n>>m>>q;
  std::vector<std::pair<ll,ll>> vw;
  for(ll i=0;i<n;i++){
    ll w,v;
    std::cin>>w>>v;
    vw.emplace_back(std::make_pair(v,w));
  }
  std::vector<ll> box;
  for(ll i=0;i<m;i++){
    ll tmp;
    std::cin>>tmp;
    box.emplace_back(tmp);
  }
  while(q--){
    std::vector<ll> as;
    ll l,r,max = 0;
    std::cin>>l>>r;
    l--;r--;
    for(ll i=0;i<m;i++){
      if(i == l){
        i = r;
        continue;
      }
      as.emplace_back(box[i]);
    }
    std::sort(as.begin(),as.end());
    // std::cout<<"chosen box\n";
    // for(int x : as) std::cout<<x<<" ";
    std::vector<bool> used(n);
    for(ll a : as){
      std::pair<ll,ll> best(-1,-1);
      for(ll i=0;i<n;i++){
        if(used[i]) continue;
        if(vw[i].second > a) continue;
        best = std::max(best,std::pair<ll,ll>(vw[i].first,i));
      }
      if(best.second == -1) continue;
      used[best.second] = true;
      max += best.first;
      // std::cout<<"tmp : "<<max<<"\n";
    }
    std::cout<<max<<"\n";
  }
}
