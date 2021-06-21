#include <iostream>
int calc(int a){
  int ans = 0;
  while(a>0){
    ans += a%10;
    a/=10;
  }
  return ans;
}

int main(){
  int a,b;
  std::cin>>a>>b;
  if(calc(a) < calc(b)) std::cout<<calc(b);
  else std::cout<<calc(a);
}
//4:11
