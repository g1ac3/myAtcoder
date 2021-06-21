//ans
#include <iostream>
#include <cmath>
int64_t in(){
  double x;
  std::cin>>x;
  x *=10000;
  return std::round(x);
}
bool ok(int64_t dx,int64_t dy,int64_t z){
  return dx*dx+dy*dy <= z*z;
}
int64_t f(int64_t x,int64_t y,int64_t z,int64_t lim){
  int l=0,r=1;
  int64_t res = 0;
  for(int i=int(1e9)+50000;i>=lim;i-=10000){
    while(ok(x-l*10000,i-y,z)) --l;
    while(ok(r*10000-x,i-y,z)) ++r;
    res += r-l-1;
  }
  return res;
}
int main(){
  int64_t x = in();
  int64_t y = in();
  int64_t r = in();
  x %= 10000;
  y %= 10000;
  int64_t ans = f(x,y,r,10000);
  ans += f(x,-y,r,0);
  std::cout<<ans;
}
