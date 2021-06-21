#include <iostream>
#define rep(i,n) for(int i=0;i<n;i++)
const int INF = 0x3fffffff;
void chmin(int &a,const int b){
  if(a > b) a = b;
}

int main(){
  int n;
  std::cin>>n;
  int ans = INF;
  rep(i,n){
    int a,p,x;
    std::cin>>a>>p>>x;
    if(x>a) chmin(ans,p);
  }
  if(ans == INF) ans = -1;
  std::cout<<ans;
}
