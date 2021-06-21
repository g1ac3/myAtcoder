#include <iostream>
#include <vector>
#include <unordered_set>

int main(){
  int64_t n,m;
  std::cin>>n>>m;
  std::vector<int64_t> a(n);
  for(int64_t i=0;i<n;i++) std::cin>>a[i];
  int64_t min = 9223372036854775807;
  int N = n-m+1;
  //std::cout<<"N "<<N<<"\n";;
  std::unordered_set<int> s;
  for(int i=0;i<m;i++) s.insert(a[i]);
  for(int i=0;i<N;i++){
    int64_t tmp = 0;
    while(s.count(tmp)>0) tmp++;
    if(tmp<min)min=tmp;
    for(int j=i+1;j<m+i;j++){
      if(a[i] == a[j]) break;
      s.erase(a[i]);
    }
    s.insert(a[m+1]);
    //std::cout<<tmp<<"\n";
  }
  std::cout<<min;
}
