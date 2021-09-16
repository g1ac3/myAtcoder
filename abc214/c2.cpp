#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<ll> S(N),T(N);
  rep(i,N) cin>>S[i];
  rep(i,N) cin>>T[i];
  const ll INF = 1e18;
  ll tMIN = INF;
  int idx = -1;
  rep(i,N){
    if(tMIN>T[i]){
      idx = i;
      tMIN=T[i];
    }
  }
  rep(i,N){
    T[(i+idx+1)%N] = min(T[(i+idx+1)%N],T[(i+idx)%N]+S[(i+idx)%N]);
  }
  rep(i,N){
    cout<<T[i]<<"\n";
  }
}
