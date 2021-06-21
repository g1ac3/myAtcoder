#include <iostream>
#include <unordered_set>

int main(){
  int64_t n;
  std::cin>>n;
  std::unordered_set<int64_t> s;
  for(int64_t a=2;a*a<=n;a++){
    int64_t x = a*a;
    while(x <= n){
      s.insert(x);
      x*=a;
    }
  }
  std::cout<< n-s.size();
}
