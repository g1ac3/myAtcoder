#include <iostream>

int main(){
  int x,y;
  std::cin>>x>>y;
  if(std::max(x,y) < std::min(x,y)+3) std::cout<<"Yes";
  else std::cout<<"No";
  return 0;
}
//1:52
//3:00
