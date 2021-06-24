#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  int N,M;
  cin>>N>>M;
  vector<ll> H(N),W(M);
  rep(i,N) cin>>H[i];
  rep(i,M) cin>>W[i];
  sort(H.begin(),H.end());
  sort(W.begin(),W.end());
  vector<ll> A(1),B(1);
  rep(i,N-1){
    if(i%2==0) A.emplace_back(H[i+1]-H[i]);
    else B.emplace_back(H[i+1]-H[i]);
  }
  rep(i,N/2){
    A[i+1] = A[i]+A[i+1];
    B[i+1] = B[i]+B[i+1];
  }
  /*
  for(int x:H)cout<<x<<" ";
  cout<<"\n";
  for(int x:W)cout<<x<<" ";
  cout<<"\n";
  for(int x:A)cout<<x<<" ";
  cout<<"\n";
  for(int x:B)cout<<x<<" ";
  cout<<"\n";
  */
  ll MIN = INT_MAX;
  for(ll x:W){
    int id = distance(H.begin(),upper_bound(H.begin(),H.end(),x));
    //printf("%d\n",id);
    if(id%2==1) MIN = min(MIN,A[id/2]+x-H[id-1]-B[id/2]+B[N/2]);
    else MIN = min(MIN,A[id/2]+H[id]-x-B[id/2]+B[N/2]);
    //cout<<MIN<<"\n";
  }
  cout<<MIN;
}
//AC
