#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
vector<pair<ll,ll>> at;
map<ll,ll> memo;
ll N,Q,tmp;

ll calc(ll x,ll i){
  ll a = at[i].first;
  ll t = at[i].second;
  if(i+1 == N){
    if(t == 1) return x+a;
    else if(t == 2) return max(x,a);
    else return min(x,a);
  }
  if(t == 1) return calc(x+a,i+1);
  else if(t == 2){
    if(x<=a){
      if(memo.find(i) != memo.end()) return memo[i];
      else if(tmp == -1) tmp = i;
    }
    return calc(max(x,a),i+1);
  }else{
    if(x>=a){
      if(memo.find(i) != memo.end()) return memo[i];
      else if(tmp == -1) tmp = i;
    }
    return calc(min(x,a),i+1);
  }
  return calc(min(x,a),i+1);
}

int main(){
  cin>>N;
  for(int i=0;i<N;i++){
    ll a,t;
    cin>>a>>t;
    at.emplace_back(make_pair(a,t));
  }
  cin>>Q;
  ll x;
  while(Q--){
    cin>>x;
    tmp = -1;
    cout<<calc(x,0)<<"\n";
    if(tmp != -1) memo[tmp] = x;
  }
}
