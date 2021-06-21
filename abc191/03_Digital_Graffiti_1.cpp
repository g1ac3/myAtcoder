#include <iostream>
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<n-1;i++)
int check(int m,int w){
  if(m == 0){
    switch(w){
      case 1: return 2;
      case 2: return 1;
      case 3: return 0;
      case 4: return 0;
    }
  }else{
    switch(w){
      case 0: return 0;
      case 1: return 0;
      case 2: return 1;
      case 3: return 2;
      case 4: return 4;
    }
  }
  return 10000;
}
int cnt(int s[][10],const int h,const int w){
  int v = 0;
  rep1(i,h){
    rep1(j,w){
      int white=0;
      if(s[i-1][j] == 0) white++;
      if(s[i][j-1] == 0) white++;
      if(s[i][j+1] == 0) white++;
      if(s[i+1][j] == 0) white++;
      v += check(s[i][j],white);
      std::cout<<check(s[i][j],white)<<" ";
    }
    std::cout<<"\n";
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
  /*
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      std::cout<<s[i][j];
    }
    std::cout<<"\n";
  }
  */
}
