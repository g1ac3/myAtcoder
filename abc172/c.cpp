#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  ll K;
  cin>>N>>M>>K;
  vector<ll> A(N+1),B(M+1);
  for(int i=0;i<N;i++){
    ll a;
    cin>>a;
    A[i+1] = a+A[i];
  }
  for(int i=0;i<M;i++){
    ll a;
    cin>>a;
    B[i+1] = a+B[i];
  }
  int MAX = -1;
  for(int i=0;i<=N;i++){
    if(A[i]>K) continue;
    auto idx = upper_bound(B.begin(),B.end(),K-A[i]);
    int x = idx-B.begin()-1;
    //printf("%lld %lld %lld %lld\n",i,x,A[i],B[x]);
    MAX = max(MAX,i+x);
  }
  cout<<MAX<<"\n";
}
//AC 20:00