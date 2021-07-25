#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD =10000;
int f(int i){
  ll sum = 0;
  while(i>0){
    sum += (i%10);
    i /= 10;
  }
  return sum%MOD;
}
int main(){
  vector<ll> A(MOD),B(MOD);
  rep(i,MOD){
    int z = i+f(i);
    //printf("%6d: %d\n",i,z);
    B[z]++;
  }
  rep(i,MOD) cout<<B[i]<<" ";
}
