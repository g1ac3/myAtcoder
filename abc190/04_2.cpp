#include <iostream>
int main(){
  int64_t n;
  std::cin>>n;
  int sum=1;
  for(int64_t i=2;i*i/2<n;i++){
    if(i%2==0 && (n-(i/2))%i==0) sum++;
    if(i%2==1 && n%i==0) sum++;
  }
  std::cout<<sum*2;
  return 0;
}
