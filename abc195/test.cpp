#include <bits/stdc++.h>

using ll = int64_t;
unsigned long long int mypow(unsigned int n){
  unsigned long long int ans = 1;
  if(n == 0) return 0;
  for(unsigned int i=0;i<n;i++) ans *= 1000;
  return ans;
}
int main(){
  unsigned long long int n;
  ll cnt_pre = 0;
  for(n=0;n<=27182818284590;n+=10000000000){
    ll cnt = 0;
    unsigned int i = 1;
    while(mypow(i) <= n){
      //std::cout<<mypow(i)-mypow(i-1)-1<<"\n";
      cnt += (i-1)*(mypow(i)-mypow(i-1)-1);
      //std::cout<<cnt<<"\n\n";
      i++;
    }
    cnt += (i-1)*(n-mypow(i-1)+1);
    std::cout<<cnt<<" "<<cnt_pre-cnt<<"\n";
    cnt_pre = cnt;
  }
}
