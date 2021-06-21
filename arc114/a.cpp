#include <bits/stdc++.h>
using ll = int64_t;
int main(){
  int n;
  std::cin>>n;
  std::vector<int> ikk;
  std::unordered_set<int> s;
  for(int i=0;i<n;i++){
    int x;
    std::cin>>x;
    if(i == 0){
      
    }else{

    }
    int j=2;
    while(x>1){
      if(x%j==0) break;
      else j++;
    }
    s.insert(j);
  }
  ll ans = 1;
  if(ikk.size() > 0){
    std::cout<<ikk[0];
    return 0;
  }
  for(int x : s) ans*=x;
  std::cout<<ans;
}
/*
49
2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50

*/
