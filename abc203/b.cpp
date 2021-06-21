#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;

int main(){
  ll N,K;
  cin>>N>>K;
  ll sum = 0;
  for(int i=1;i<=N;i++){
    for(int j=1;j<=K;j++){
      sum += i*100+j;
    }

  }
  cout<<sum;
}
