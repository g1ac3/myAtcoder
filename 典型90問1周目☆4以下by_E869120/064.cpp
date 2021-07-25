#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
  int N,Q;
  cin>>N>>Q;
  vector<ll> A(N);
  rep(i,N)cin>>A[i];
  int l,r;
  ll v;
  vector<ll> B(N+1);
  while(Q--){
    cin>>l>>r>>v;
    l--;r--;
    B[l]+=v;
    B[r+1]-=v;
  }
  rep(i,N){
    A[i] += B[i];
    B[i+1] += B[i];
  }
  ll sum = 0;
  rep(i,N-1) sum += abs(A[i]-A[i+1]);
  cout<<sum;
}
