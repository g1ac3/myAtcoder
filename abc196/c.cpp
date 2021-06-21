#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  ll N;
  cin>>N;
  ll i = 1;
  ll cnt = 0;
  ll m = 10;
  while(i*m+i <= N){
    i++;
    cnt++;
    if(i/m == 1) m*=10;
  }
  cout<<cnt;
}
