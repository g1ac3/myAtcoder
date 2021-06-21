#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ll N;
  cin>>N;
  vector<ll> A(N),B(N/2),C(N/2);
  vector<bool> T(N/2);
  rep(i,N) cin>>A[i];
  rep(i,N/2){
    B[i] = A[i];
    C[i] = A[N-1-i];
    if(B[i]==C[i]) T[i] = true;
  }
  for(int i=0;i<N/2;i++){
    if(T[i]) continue;
    
  }
  for(ll x:B)cout<<x<<" ";
  cout<<"\n";
  for(ll x:C)cout<<x<<" ";
}
