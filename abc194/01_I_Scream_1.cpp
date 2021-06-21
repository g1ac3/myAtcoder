#include <iostream>

int main(){
  int a,b;
  std::cin>>a>>b;
  if(a+b >=15 && b>=8) std::cout<<"1";
  else if(a+b >= 10 && b>=3) std::cout<<"2";
  else if(a+b>=3) std::cout<<"3";
  else std::cout<<"4";
  return 0;
}
