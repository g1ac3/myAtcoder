#include <iostream>
#include <vector>
#include <numeric>
int64_t score(std::string s){
  std::vector<int64_t> cnt(10);
  //for(int x : cnt) std::cout<<x<<" ";
  //std::cout<<"\n";
  iota(cnt.begin(),cnt.end(),0);
  //for(int x : cnt) std::cout<<x<<" ";
  //std::cout<<"\n";
  for(char c : s) cnt[c-'0']*=10;
  return accumulate(cnt.begin(),cnt.end(),0);
}
int main(){
  int64_t k;
  std::string s,t;
  std::cin>>k>>s>>t;
  std::vector<int64_t> cnt(10,k);
  for(char c : s+t){
    cnt[c-'0']--;
    std::cout<<c<<" "<<cnt[c-'0']<<"\n";
  }
  int64_t win = 0;
  for(int64_t x=1;x<=9;x++) for(int64_t y=1;y<=9;y++){
    s.back() = '0'+x;
    t.back() = '0'+y;
    if(score(s)<=score(t)) continue;
    win += cnt[x]*(cnt[y]-(x==y));
  }
  const int64_t rem = 9*k-8;
  std::cout<<double(win)/rem/(rem-1);

}
