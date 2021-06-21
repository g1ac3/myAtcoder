#include <iostream>

int main(){
  int n;
  std::cin>>n;
  double ans = 100000;
  for(int i=2;i<n;i++){
    ans += 100000/(i*1.0);
  }
  printf("%.16f",n*ans/100000);
}
