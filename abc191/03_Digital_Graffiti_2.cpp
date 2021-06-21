//me
#include <iostream>
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=0;i<n-1;i++)

int cnt(int s[][10],const int h,const int w){
  int v = 0;
  rep1(i,h){
    rep1(j,w){
      int black=s[i][j];
      black += s[i][j+1];
      black += s[i+1][j];
      black += s[i+1][j+1];
      if(black%2 != 0) v++;
      //std::cout<<(black%2 != 0)<<" ";
    }
    //std::cout<<"\n";
  }
  return v;
}
int main(){
  int h,w;
  char tmp;
  std::cin>>h>>w;
  int s[10][10];
  rep(i,h){
    rep(j,w){
      std::cin>>tmp;
      if(tmp == '#') s[i][j] = 1;
      else s[i][j] = 0;
    }
  }
  std::cout<<cnt(s,h,w);
}
