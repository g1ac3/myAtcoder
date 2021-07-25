#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
vector<ll> A;
ll N,K;
bool calc(ll c){
  for(int i=0;i<=N-c;i++){
    unordered_set<ll> s;
    for(int j=0;j<c;j++) s.insert(A[i+j]);
    //for(ll x:s)cout<<x<<" ";
    //cout<<"\n";
    if(s.size()<=K) return true;
  }
  return false;
}
int main(){
  cin>>N>>K;
  A.resize(N);
  for(int i=0;i<N;i++) cin>>A[i];
  ll l=0,r=N+1;
  while(r-l>1){
    ll c =(l+r)/2;
    //cout<<"---------\n";
    //printf("%lld %lld %lld\n",l,r,c);
    if(calc(c)) l=c;
    else r=c;
  }
  cout<<l;
}
