#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N;
  cin>>N;
  vector<ll> A(N),B(N),C;
  rep(i,N) cin>>A[i];
  B[0] = A[0];
  rep(i,N-1) B[i+1] = A[i+1]+A[i];
  ll sum = 0;
  for(int i=0;i<(1<<(N-1));i++){
    C.clear();
    C.emplace_back(A[0]);
    for(int j=0;j<N-1;j++){
      if((i&(1<<j))==(1<<j)) C.emplace_back(A[j+1]);
      else C[C.size()-1]+=A[j+1];
    }
    bool t = true;
    for(int j=0;j<(int)C.size();j++){
      if(C[j]%(j+1)==0) continue;
      t = false;
    }
    if(t){
      sum++;
      for(ll x:C)cout<<x<<" ";
      cout<<"\n";
    }
  }
  cout<<sum;
}
