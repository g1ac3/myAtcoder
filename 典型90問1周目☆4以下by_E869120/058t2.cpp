#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 10000;
int f(int i){
  ll sum = 0;
  while(i>0){
    sum += (i%10);
    i /= 10;
  }
  return sum;
}
int main(){
  vector<vector<ll>> A(MOD),B(MOD);
  rep(i,MOD){
    int z = (i+f(i))%MOD;
    //printf("%6d: %d\n",i,z);
    A[z].emplace_back(i);
    B[i].emplace_back(z);
  }
  rep(i,MOD/10){
    printf("%6d: ",i);
    for(ll x:A[i]) cout<<x<<" ";
    cout<<" // ";
    for(ll x:B[i]) cout<<x<<" ";
    cout<<"\n";
  }
}
