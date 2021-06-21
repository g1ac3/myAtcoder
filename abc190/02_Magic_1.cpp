#include <iostream>

int main(){
  int n;
  int64_t s,d;
  std::cin>>n>>s>>d;
  int64_t tmp1,tmp2;
  for(int i=0;i<n;i++){
    std::cin>>tmp1>>tmp2;
    if(tmp1 < s && d < tmp2){
      std::cout<<"Yes";
      return 0;
    }
  }
  std::cout<<"No";
  return 0;
}
