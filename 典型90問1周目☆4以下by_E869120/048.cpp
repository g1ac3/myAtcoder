#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);i++)
int main(){
  ll N,K;
  cin>>N>>K;
  vector<ll> A(2*N);
  rep(i,N){
    cin>>A[i]>>A[i+N];
    A[i]-=A[i+N];
  }
  sort(A.begin(),A.end());
  reverse(A.begin(),A.end());
  ll sum = 0;
  rep(i,K) sum+=A[i];
  cout<<sum;
}
