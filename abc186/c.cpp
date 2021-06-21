#include <bits/stdc++.h>
using namespace std;
bool calc(int64_t i){
  int mem = i;
  while(i>0){
    if(i%10==7) return true;
    i /= 10;
  }
  i=mem;
  while(i>0){
    if(i%8==7) return true;
    i /= 8;
  }
  return false;
}
int main(){
  int64_t n;
  cin>>n;
  int64_t cnt=n;
  for(int64_t i=1;i<=n;i++){
    // if(i%10 == 7 || i%8==7 || calc(i)) cnt--;
    if(calc(i)){
      //cout<<i<<" ";
      cnt--;
    }
  }
  cout<<cnt;
}
//30:00
