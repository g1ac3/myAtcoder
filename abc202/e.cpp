#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
vector<vector<ll>> p;
int main(){
  ll N,Q;
  cin>>N;
  p.resize(N);
  for(ll i=1;i<N;i++){
    ll tmp;
    cin>>tmp;
    p[tmp].emplace_back(tmp);
  }
  cin>>Q;
  while(Q--){
    ll U,D;
    cin>>U>>D;
    
  }
}
