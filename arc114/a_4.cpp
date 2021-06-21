#include <bits/stdc++.h>
using ll = int64_t;
int64_t gcd(int64_t a,int64_t b){
  int64_t r;
  do{
    r = a%b;
    a=b;
    b=r;
  }while(r>0);
  return a;
}
int main(){
  int n;
  std::cin>>n;
  std::vector<int> a(n);
  for(int i=0;i<n;i++) std::cin>>a[i];
  int i = 2;
  while(true){
    for(int j=0;j<n;j++){
      if(gcd(a[j],i) == 1){
        i++;
        break;
      }else continue;
      std::cout<<i;
      return 0;
    }

  }
}
/*
while(true){
  for(int j=0;j<=n;j++){
    if(j == n){
      std::cout<<i;
      return 0;
    }else{
      if(gcd(a[j],i) == 1){
        i++;
        break;
      }
    }
  }
}*/
