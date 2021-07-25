#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
  int N,Q;
  cin>>N>>Q;
  vector<ll> A(N);
  rep(i,N)cin>>A[i];
  vector<ll> B(N+1);
  ll sum = 0;
  rep(i,N-1){
    B[i] = A[i]-A[i+1];
    sum += abs(B[i]);
  }
  int l,r;
  ll v;
  while(Q--){
    cin>>l>>r>>v;
    l--;r--;
    if(l>0){
      sum -= abs(B[l-1]);
      B[l-1] -= v;
      sum += abs(B[l-1]);
    }
    if(r!=N-1){
      sum -= abs(B[r]);
      B[r] += v;
      sum += abs(B[r]);
    }
    cout<<sum<<"\n";
  }
}
