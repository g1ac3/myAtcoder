#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  int N,M;
  cin>>N>>M;
  vector<int> A(N),B(N);
  bitset<1001> b;
  int t;
  rep(i,N){
    cin>>t;
    b[t] = 1;
  }
  rep(i,M){
    cin>>t;
    b[t] = b[t]^1;
  }
  rep(i,1001){
    if(!b[i]) continue;
    cout<<i<<" ";
  }
}
