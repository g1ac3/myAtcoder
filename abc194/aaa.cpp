#include <iostream>
#include <unordered_set>

int main(){
  int n;
  std::cin>>n;
  std::unordered_set<int> s;
  for(int i=0;i<n;i++){
    int tmp;
    std::cin>>tmp;
    s.insert(tmp);
  }
  for(int a : s) std::cout<<a<<" ";
  std::cout<<"\n" ;
  std::cout<<s.count(3)<<"\n";
  for(int a : s) std::cout<<a<<" ";
  std::cout<<"\n" ;
  for(int a : s) std::cout<<a<<" ";

}
