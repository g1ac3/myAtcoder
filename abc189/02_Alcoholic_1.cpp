#include <iostream>

int main(){
  int n,x;
  std::cin>>n>>x;
  int sum = 0;
  for(int i=0;i<n;i++){
    int v,p;
    std::cin>>v>>p;
    sum+=(v*p);
    if(x*100 < sum){
      std::cout<<i+1;
      return 0;
    }
  }
  std::cout<<"-1";
  return 0;
}
