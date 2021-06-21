#include <iostream>

int main(){
  int64_t i = 2;
  std::cout<<i<<"\n";
  while(i<1000000000){
    i++;
    std::cout<<i<<"\n";
    i*=2;
    std::cout<<i<<"\n";
  }
}
