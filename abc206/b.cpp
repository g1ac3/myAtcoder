#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ll N;
  cin>>N;
  int i=0;
  ll sum = 0;
  do{
    i++;
    sum+=i;
  }while(N>sum);
  cout<<i;
}
