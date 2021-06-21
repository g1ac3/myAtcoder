#include <iostream>
#include <map>
int64_t x;
std::map<int64_t,int64_t> memo;

int64_t f(int64_t y){
  if(y == 1) return std::abs(x-y);
  if(memo.find(y) != memo.end()) return memo[y];
  if(y%2==0){
    return memo[y] = std::min(f(y/2)+1,std::abs(y-x));
  }else{
    return memo[y] = std::min(std::abs(x-y),std::min(f(y+1)+1,f(y-1)+1));
  }
}
int main(){
  int64_t y;
  std::cin>>x>>y;
  std::cout<<f(y)<<"\n";
}
