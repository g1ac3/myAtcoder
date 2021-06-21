#include<iostream>

int main(){
  int n;
  int time = 0;
  int min = -1;
  std::cin>>n;
  for(int i=0;i<n;i++){
    int a,p,x;
    std::cin>>a>>p>>x;
    time += a;
    if((x-a) > 0 && (min > p || min == -1)) min = p;
  }
  std::cout<<min;
  return 0;
}
