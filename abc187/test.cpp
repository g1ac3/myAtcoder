#include <iostream>
#include <unordered_set>

int main(){
  int n;
  std::cin>>n;
  std::unordered_set<std::string> st,st2;
  for(int i=0;i<n;i++){
    std::string tmp;
    std::cin>>tmp;
    tmp = tmp.substr(1);
    std::cout<<tmp<<"\n";
  }
  std::cout<<"satisfiable";
}
