#include <bits/stdc++.h>
using ll = int64_t;
int main(){
  int n;
  std::cin>>n;
  std::vector<std::unordered_set<int>> ikk(n+1);
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
  /*
  for(int i=0;i<n;i++){
    std::cout<<"\n";
    for(int x:ikk[i]) std::cout<<x<<" ";
  }
  */
  for(int x : ikk[0]) ikk[n].insert(x);

  for(int i=1;i<n;i++){
    for(int x : ikk[0]){
      if(ikk[i].count(x)==0) ikk[n].erase(x);
    }
  }
  /*
  std::cout<<"\n";
  for(int x : ikk[n]) std::cout<<x<<" ";
  std::cout<<"\n";
  */
  ll MIN = 1001001001;
  if(ikk[n].size()>0){
    int min = 1001001001;
    for(int x : ikk[n]){
      if(x < min) min = x;
    }
    MIN = min;
  }
  for(int i=0;i<n;i++){
    int min = 1001001001;
    for(int x:ikk[i]){
      if(x < min) min = x;
    }
    s.insert(min);
  }
  ll ans = 1;
  //std::cout<<"\n";
  for(int x : s) ans*=x;
  std::cout<<std::min(MIN,ans);
}
