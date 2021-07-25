#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll INF = 1e16;

int main(){
  ll N,K;
  cin>>N>>K;
  vector<ll> P(N),C(N);
  rep(i,N){
    cin>>P[i];
    P[i]--;
  }
  rep(i,N) cin>>C[i];
  ll MAX = -INF;
  for(int i=0;i<N;i++){
    vector<bool> used(N);
    int n = i;
    int k = 0;
    ll p = 0;
    // printf("%d\n",i);
    ll sMAX = -INF;
    ll sp = 0;
    while(!used[n]&&K>k){
      used[n] = true;
      p += C[P[n]];
      MAX = max(MAX,p);
      sMAX = max(sMAX,p);
      // cout<<"p : "<<p<<"\n";
      n = P[n];
      k++;
    }
    if(K==k) continue;
    sp = p;
    p += p*((K-k)/k);
    k = (K-k)%k;
    MAX = max(MAX,p);
    MAX = max(MAX,p-sp+sMAX);
    while(k--){
      p += C[P[n]];
      // printf(" p ; %d %d\n",p,C[P[n]]);
      MAX = max(MAX,p);
      n = P[n];
    }
    // cout<<p<<"\n";
    MAX = max(MAX,p);
  }
  cout<<MAX<<"\n";
}//44:32
