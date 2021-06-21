#include <iostream>
int main(){
  int v,t,s,d;
  std::cin>>v>>t>>s>>d;
  if(v*t<=d && d<=v*s) std::cout<<"No";
  else std::cout<<"Yes";
}
