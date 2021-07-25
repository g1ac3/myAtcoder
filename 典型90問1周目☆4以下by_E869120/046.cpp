#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
ll M = 46;
int main(){
  ll N,tmp;
  cin>>N;
  vector<ll> A(M),B(M),C(M);
  rep(i,N){
    cin>>tmp;
    A[tmp%M]++;
  }
  rep(i,N){
    cin>>tmp;
    B[tmp%M]++;
  }
  rep(i,N){
    cin>>tmp;
    C[tmp%M]++;
  }
  ll sum = 0;
  rep(i,M)rep(j,M)rep(k,M)if((i+j+k)%M==0) sum+=A[i]*B[j]*C[k];
  cout<<sum;
}
