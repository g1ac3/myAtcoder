#include <bits/stdc++.h>

using ll = int64_t;

int main(){
  ll n,m,q;
  std::cin>>n>>m>>q;
  std::vector<std::pair<ll,ll>> wv;
  for(ll i=0;i<n;i++){
    ll w,v;
    std::cin>>w>>v;
    wv.emplace_back(std::make_pair(v,w));
  }
  std::sort(wv.begin(),wv.end());
  std::cout<<"\n";
  /*
  for(auto [a,b] : wv) printf("%lld %lld\n",a,b);
  std::cout<<"\n";
  */
  std::vector<ll> box;
  for(ll i=0;i<m;i++){
    ll tmp;
    std::cin>>tmp;
    box.emplace_back(tmp);
  }
  std::vector<ll> g;
  std::vector<ll> cbox;
  std::vector<std::pair<ll,ll>> save;
  while(q--){
    std::copy(wv.begin(),wv.end(),save.begin());
    g.clear();
    cbox.clear();
    ll l,r,max = 0;
    std::cin>>l>>r;
    l--;r--;
    for(ll i=0;i<m;i++){
      if(i == l){
        i = r;
        continue;
      }
      g.emplace_back(i);
    }
    // std::cout<<"chosen box\n";
    // for(int x : g) cbox.emplace_back(box[x]);
    std::sort(cbox.begin(),cbox.end());
    // for(int x : cbox) std::cout<<x<<" ";
    // std::cout<<"\n";
    std::pair<ll,ll> p;
    /*
    for(int i=0;i<cbox.size();i++){
      for(int j=save.size()-1;j>=0;j--){
        if(cbox[i] >= save[j]){
          p.first
        }
      }

    }
    */
    std::cout<<max<<"\n";
  }
}
