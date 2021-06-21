#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
ll INF = 1001001001;
vector<vector<ll>> A;
int main(){
  ll N,K,MIN=INF;
  cin>>N>>K;
  ll KK=K*K;
  A.resize(N);
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      ll tmp;
      cin>>tmp;
      A[i].emplace_back(tmp);
    }
  }
  for(int i=0;i<=N-K;i++){
    for(int j=0;j<=N-K;j++){
      vector<ll> tmp(KK);
      for(int a=0;a<K;a++){
        for(int b=0;b<K;b++){
          tmp[a*K+b] = A[i+a][j+b];
        }
      }
      sort(tmp.begin(),tmp.end());
      MIN = min(MIN,tmp[(KK+1)/2-1]);
    }
  }
  cout<<MIN;
}
