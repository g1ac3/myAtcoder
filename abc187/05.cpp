#include <iostream>
#include <vector>
#include <unordered_set>
std::unordered_set<int> s;
std::vector<int64_t> p;
void go(std::vector<std::vector<int>> to,int e,int64_t score){
  s.insert(e);
  p[e]+=score;
  for(int x : to[e]){
    if(s.count(x) == 0) go(to,x,score);
  }
}
int main(){
  int n;
  std::cin>>n;
  std::vector<std::pair<int,int>> ab;
  p.resize(n+1);
  ab.emplace_back(std::make_pair(-1,-1));
  for(int i=0;i<n-1;i++){
    int a,b;
    std::cin>>a>>b;
    ab.emplace_back(std::make_pair(a,b));
  }
  std::vector<std::vector<int>> to(n+1,std::vector<int>(0));
  for(int i=1;i<n;i++){
    int a = ab[i].first;
    int b = ab[i].second;
    to[a].emplace_back(b);
    to[b].emplace_back(a);
  }
  int q;
  std::cin>>q;
  for(int i=0;i<q;i++){
    s.clear();
    int t,e;
    int64_t x;
    std::cin>>t>>e>>x;
    if(t==1){
      s.insert(ab[e].second);
      go(to,ab[e].first,x);
    }else{
      s.insert(ab[e].first);
      go(to,ab[e].second,x);
    }
  }
  for(int i=1;i<=n;i++) std::cout<<p[i]<<"\n";
}
