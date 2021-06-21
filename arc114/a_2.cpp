#include <bits/stdc++.h>
using ll = int64_t;

int main(){
  int n;
  std::cin>>n;
  std::unordered_set<int> ikk;
  std::vector<int> s(n);
  for(int i=0;i<n;i++) std::cin>>s[i];
  for(int i=0;i<1;i++){
    int j = 2;
    while(s[i]>1){
      if(s[i]%j==0){
        ikk.insert(j);
        s[i]/=j;
      }else{
        j++;
      }
      /*
      if(ikk.size()>0){
        for(int x : ikk) std::cout<<x<<" ";
        std::cout<<"\n";
      }
      */
    }
    for(int i=1;i<n;i++){
      int j = 2;
      while(s[i]>1){
        if(s[i]%j==0){
          s[i]/=j;
        }else{
          ikk.erase(j);
          j++;
        }
        /*
        if(ikk.size()>0){
          for(int x : ikk) std::cout<<x<<" ";
          std::cout<<"\n";
        }*/
      }
      for(int x : ikk){
        if(x > j) ikk.erase(x);
      }
    }
  }
  if(ikk.size()>0){
    int min = 1001001001;
    for(int x : ikk){
      if(min > x) min = x;
    }
    std::cout<<min;
    return 0;
  }
  std::cout<<"normal";
}
