#include <bits/stdc++.h>

using ll = int64_t;

int main(){
  ll a,b,w;
  std::cin>>a>>b>>w;
  w = w*1000;
  ll min = (w+(b-1))/b;
  ll max = w/a;
  if(max < min) std::cout<<"UNSATISFIABLE";
  else std::cout<<min<<" "<<max;
}
