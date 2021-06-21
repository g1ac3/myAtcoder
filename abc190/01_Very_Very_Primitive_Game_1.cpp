#include <iostream>

int main(){
  int a,b,c;
  std::cin>>a>>b>>c;
  if(c == 0){
    if(a>b) std::cout<<"Takahashi";
    else std::cout<<"Aoki";
  }else{
    std::swap(a,b);
    if(a>b) std::cout<<"Aoki";
    else std::cout<<"Takahashi";
  }
}
