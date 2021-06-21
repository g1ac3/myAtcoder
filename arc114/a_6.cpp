#include <bits/stdc++.h>
using ll = int64_t;
int main(){
  int n;
  std::cin>>n;
  std::vector<std::unordered_set<int>> ikk(n);
  std::unordered_set<int> s;
  for(int i=0;i<n;i++){
    int x;
    std::cin>>x;
    int j=2;
    while(x>1){
      if(x%j==0){
        x/=j;
        ikk[i].insert(j);
      }else{
        j++;
      }
    }
  }
  for(int i=0;i<n;i++){
    std::cout<<"\n";
    for(int x:ikk[i]) std::cout<<x<<" ";
  }
  
}
