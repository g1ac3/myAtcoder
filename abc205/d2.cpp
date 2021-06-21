#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ll N,Q;
  cin>>N>>Q;
  vector<ll> A(N);
  rep(i,N) cin>>A[i];
  ll K;
  while(Q--){
    cin>>K;
    if(A[0]>K){
      cout<<K<<"\n";
      continue;
    }
    if(A[N-1]<=K){
      cout<<K+N<<"\n";
      continue;
    }
    int l=0,r=N;
    while(r-l>1){
      int c = (r-l)/2;
      printf("%d %d %d %lld",l,r,c,A[c]);
      if(A[c]<=K) l = c;
      else r = c;
    }
    printf("-- %d %d ",l,r);
    cout<<K+r<<"\n";
  }
}
