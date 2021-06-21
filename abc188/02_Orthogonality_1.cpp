#include <iostream>

int main(){
  int n;
  std::cin>>n;
  int64_t ans;
  int a[n];
  int b[n];
  for(int i=0;i<n;i++){
    std::cin>>a[i];
  }
  for(int i=0;i<n;i++){
    std::cin>>b[i];
  }
  for(int i=0;i<n;i++){
    ans += a[i]*b[i];
  }
  if(ans == 0) std::cout<<"Yes";
  else std::cout<<"No";
  return 0;
}
//6:08
