#include <iostream>
#include <vector>
bool calc(std::pair<int,int> a,std::pair<int,int> b){
  return std::abs(a.second - b.second) <= std::abs(a.first - b.first);
}
int main(){
  int n,cnt = 0;
  std::cin>>n;
  std::vector<std::pair<int,int>> xy;
  for(int i=0;i<n;i++){
    int x,y;
    std::cin>>x>>y;
    xy.emplace_back(std::make_pair(x,y));
  }
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(calc(xy[i],xy[j])) cnt++;
    }
  }
  std::cout<<cnt;
}
//11:00
