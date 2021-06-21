#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  int64_t N;
  int64_t C;
  int64_t ans=0;
  std::cin>>N>>C;
  std::vector<std::pair<int64_t,int64_t>> e;
  for(int64_t i=0;i<N;i++){
    int64_t a,b,c;
    std::cin>>a>>b>>c;
    e.emplace_back(std::make_pair(a-1,c));
    e.emplace_back(std::make_pair(b,-c));
  }
  /*
  for(int64_t i=0;i<2*N-1;i++) for(int64_t j=i+1;j<2*N;j++){
    if(e[i].first > e[j].first) std::swap(e[j],e[i]);
  }
  */
  std::sort(e.begin(),e.end());
  int64_t t = 0;
  int64_t sum = 0;

  for(std::pair<int64_t,int64_t> x : e){
    ans += std::min(sum,C)*(x.first-t);
    t = x.first;
    sum += x.second;
  }
  std::cout<<ans;
}
