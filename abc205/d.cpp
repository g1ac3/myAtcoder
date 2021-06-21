#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
static const int M = 100000;

int main(){
  ll N,Q;
  cin>>N>>Q;
  vector<bool> T(N);
  rep(i,N){
    int tmp;
    cin>>tmp;
    T[tmp] = true;
  }
  vector<ll> A;
  for(int i=0;i<=M;i++)if(!T[i]) A.emplace_back(i);
  ll K;
  while(Q--){
    cin>>K;
    if(K>M) cout<<K-A.size()<<"\n";
    else cout<<A[(int)K]<<"\n";
  }
}
