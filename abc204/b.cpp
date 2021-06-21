#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
  ll N;
  cin>>N;
  vector<ll> A(N);
  rep(i,N) cin>>A[i];
  ll sum = 0;
  rep(i,N){
    if(A[i]<10) continue;
    sum += A[i] - 10;
  }
  cout<<sum;
}
