#include <iostream>
#include <vector>

int main(){
  int n,m;
  std::cin>>n>>m;
  std::vector<std::vector<int>> p(n);
  for(int i=0;i<n;i++){
    int a;
    std::cin>>a;
    p[a].push_back(i);
  }
  for(int i=0;i<n;i++){
    int pre = -1;
    p[i].push_back(n);
    for(int j : p[i]){
      if(j-pre > m){
        std::cout<<i<<"\n";
        return 0;
      }
      pre = j;
    }
  }
  std::cout<<n<<"\n";
  return 0;
}
