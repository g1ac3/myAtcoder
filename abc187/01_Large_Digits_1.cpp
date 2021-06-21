#include <iostream>
int S(std::string s){
  return (s[0]-'0') + (s[1]-'0') + (s[2]-'0');
}
int main(){
  std::string a,b;
  std::cin>>a>>b;
  std::cout<<std::max(S(a),S(b));
}
