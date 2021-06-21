#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
int MIN = 1001001001;
int dig(ll a){
  int sum = 0;
  while(a>0){
    a/=10;
    sum++;
  }
  return sum;
}
int main(){
  ll N;
  cin>>N;
  ll N2 = sqrt(N);
  vector<ll> a;
  for(int i=1;i<=N2;i++){
    if(N%i==0) a.emplace_back(i);
  }
  for(ll x:a){
    MIN = min(MIN,max(dig(x),dig(N/x)));
  }
  cout<<MIN;
}
