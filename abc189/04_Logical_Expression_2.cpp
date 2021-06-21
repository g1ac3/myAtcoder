#include <iostream>
int main(){
  int n;
  std::cin>>n;
  int64_t f = 1;
  int64_t t = 1;
  for(int i=0;i<n;i++){
    std::string s;
    std::cin>>s;
    if(s == "OR") t = t*2+f;
    else f = f*2+t;
  }
  std::cout<<t;
}
