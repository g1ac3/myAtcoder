#include <iostream>

int main(){
  std::string s;
  std::cin>>s;
  if(s[0] == s[1] && s[1] == s[2]) std::cout<<"Won";
  else std::cout<<"Lost";
  return 0;
}
