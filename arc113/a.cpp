#include <bits/stdc++.h>
using ll = int64_t;
int main(){
  int K;
  std::cin>>K;
  ll ans = 0;
  for(ll i = 1;i<=K;i++){
    for(ll j = i;j*i<=K;j++){
      for(ll l = 1;i*j*l<=K;l++) ans++;
    }
  }
  std::cout<<ans;
}
