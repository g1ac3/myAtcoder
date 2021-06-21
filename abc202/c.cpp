#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  ll N;
  cin>>N;
  vector<ll> A(N+1),B(N+1),C(N+1);
  for(int i=0;i<N;i++){
    ll a;
    cin>>a;
    A[a-1]++;
  }
  for(int i=0;i<N;i++) cin>>B[i];
  for(int i=0;i<N;i++){
    ll c;
    cin>>c;
    C[B[c-1]-1]++;
  }
  ll sum = 0;
  for(int i=0;i<N;i++){
    sum += (A[i]*C[i]);
  }
  cout<<sum;
}
