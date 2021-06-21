//me
#include <iostream>
#define rep(i,a,r) for(int i=a-r;i<a+r+2;i++)
int fabs(int a){
  if(a < 0) return -a;
  return a;
}
int main(){
  double x,y,r;
  std::cin>>x>>y>>r;
  int xin = (int)(x);
  int yin = (int)(y);
  int rin = (int)(r);
  int c = (2*rin+2)*(2*rin+2);
  double rr = r*r;
  rep(i,yin,rin){
    rep(j,xin,rin){
      //if(fabs(i)+fabs(j) >= rin) std::cout<<"("<<j<<","<<i<<") ";
      if(fabs(i)+fabs(j) >= rin && rr < (j-x)*(j-x)+(i-y)*(i-y)) c--;
    }
  }
  std::cout<<c;
}
