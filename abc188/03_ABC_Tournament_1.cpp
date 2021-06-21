#include <iostream>
int64_t mypow(int n){
  int64_t ans = 1;
  for(int i=0;i<n;i++) ans*=2;
  return ans;
}
int main(){
  int n;
  std::cin>>n;
  int64_t N = mypow(n);
  int64_t max1 = 0,max2 = 0;
  int num1,num2;
  for(int i=0;i<N/2;i++){
    int64_t tmp;
    std::cin>>tmp;
    if(tmp > max1){
      max1 = tmp;
      num1 = i;
    }
  }
  for(int i=N/2;i<N;i++){
    int64_t tmp;
    std::cin>>tmp;
    if(tmp > max2){
      max2 = tmp;
      num2 = i;
    }
  }
  if(max1 < max2) std::cout<<num1+1;
  else std::cout<<num2+1;
}
//17:15
