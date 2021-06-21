#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;

int main(){
  ll N,K;
  cin>>N>>K;
  vector<pair<ll,ll>> A(N);
  for(int i=0;i<N;i++) cin>>A[i].first>>A[i].second;
  sort(A.begin(),A.end());
  ll i=0;
  ll n=0;
  while(i<N){
    K-=(A[i].first-n);
    n = A[i].first;
    if(K<0) break;
    K+=A[i].second;
    i++;
  }
  n += K;
  cout<<n;
}
