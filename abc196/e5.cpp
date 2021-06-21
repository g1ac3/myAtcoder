#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
vector<pair<ll,ll>> at;
map<ll,ll> memo;
ll N,Q,tmp;

ll calc(){
  ll x;
  cin>>x;
  for(ll i=0;i<N;i++){
    ll a = at[i].first;
    ll t = at[i].second;
    if(t == 1) x+=a;
    else if(t == 2){
      if(x<=a){
        if(memo.find(i) != memo.end()) return memo[i];
        if(tmp == -1) tmp = i;
        x = a;
      }
    }else{
      if(x>=a){
        if(memo.find(i) != memo.end()) return memo[i];
        if(tmp == -1) tmp = i;
        x = a;
      }
    }
  }
  if(tmp != -1) return memo[tmp] = x;
  return x;
}

int main(){
  cin>>N;
  for(int i=0;i<N;i++){
    ll a,t;
    cin>>a>>t;
    at.emplace_back(make_pair(a,t));
  }
  cin>>Q;
  while(Q--){
    tmp = -1;
    cout<<calc()<<"\n";
  }
}
