#include <iostream>

int main(){
  int n;
  int64_t x,tmp;
  std::cin>>n>>x;
  for(int i=0;i<n;i++){
    std::cin>>tmp;
    if(x != tmp) std::cout<<tmp<<" ";
  }
}
