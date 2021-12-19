#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ll N,K;
  cin>>N>>K;
  vector<ll> A(N+1);
  rep(i,N) cin>>A[i+1];
  map<ll,ll> MAP;
  vector<ll> C;
  int n = 1;
  ll k=1;
  bool b = false;
  for(int i=1;i<=N&&K>=0;i++){
    if(MAP[n]>0){
      k=i-MAP[n];
      b = true;
      break;
    }
    C.emplace_back(n);
    MAP[n] = i;
    n = A[n];
    K--;
  }
  if(b){
    K%=k;
    //for(ll x:C) cout<<x<<" ";
    //printf("\n%lld %lld %lld\n",k,K,MAP[n]-1);
    cout<<C[MAP[n]-1+K]<<endl;
  }else{
    cout<<C[C.size()-1]<<endl;
  }
}
//AC 50:18
/*
7 8
2 3 4 5 6 7 4

7 3
2 3 4 5 6 7 4
*/
