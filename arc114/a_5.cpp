#include <bits/stdc++.h>
using ll = int64_t;
int mod(int a,int b){
  if(a>b) return a%b;
  else return b%a;
}
int main(){
  int n;
  std::cin>>n;
  std::vector<int> a(n);
  for(int i=0;i<n;i++) std::cin>>a[i];
  int i = 2;
  while(true){

    for(int j=0;j<=n;j++){
      printf("%d %d %d %d %d\n",i,j,a[j],i,mod(a[j],i));
      if(j == n){
        std::cout<<i;
        return 0;
      }else{
        if(mod(a[j],i)!=0){
          i++;
          break;
        }
      }
    }
  }
}
