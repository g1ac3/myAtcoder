#include <iostream>
#include <vector>
#include <algorithm>
int main(){
  int64_t n;
  int64_t aoki = 0;
  std::cin>>n;
  std::vector<int64_t> ch;
  for(int64_t i=0;i<n;i++){
    int64_t a,b;
    std::cin>>a>>b;
    aoki += a;
    ch.emplace_back(2*a + b);
  }
  std::sort(ch.begin(),ch.end());
  //for(int64_t x : ch) std::cout<<x<<"\n";
  int64_t i=0;
  int64_t l = ch.size()-1;
  //std::cout<<aoki<<"\n";
  while(aoki >= 0){
    aoki -= ch[l-i];
    i++;
    //std::cout<<aoki<<"\n";
  }
  std::cout<<i;
}
//
