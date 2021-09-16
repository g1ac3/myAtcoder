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
  bool b = true;
  while(b){
    if(T[0]<=T[N-1]+S[N-1]) b = false;
    rep(i,N) T[i+1] = min(T[i+1],T[i]+S[i]);
  }
  rep(i,N){
    cout<<T[i]<<"\n";
  }
}
