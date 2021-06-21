#include <bits/stdc++.h>

using ll = int64_t;

int main(){
  ll a,b,w;
  std::cin>>a>>b>>w;
  w = w*1000;
  ll cnt1 = 1;
  ll cnt2 = 1;
  ll cnt = 1;
  while(b*cnt < w){
    cnt++;
    if(w < a*cnt){
      std::cout<<"UNSATISFIABLE";
      return 0;
    }
  }
  while(b*cnt1<w) cnt1++;
  while(a*cnt2<=w) cnt2++;
  std::cout<<cnt1<<" "<<cnt2-1;
}
