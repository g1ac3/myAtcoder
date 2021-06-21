#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
vector<pair<ll,ll>> at;
map<ll,ll> memo;
ll N,Q;

ll calc(ll x,ll i){
  ll a = at[i].first;
  ll t = at[i].second;
  printf("x : %lld  i : %lld\n",x,i);
  if(i+1 == N){
    if(t == 1) return x+a;
    else if(t == 2) return max(x,a);
    else return min(x,a);
  }
  if(t == 1) return calc(x+a,i+1);
  else if(t == 2){
    if(x<=a){
      if(memo.find(i) != memo.end()) return memo[i];
      return memo[i] = calc(a,i+1);
    }
    return calc(x,i+1);
  }else{
    if(x>=a){
      if(memo.find(i) != memo.end()) return memo[i];
      return memo[i] = calc(a,i+1);
    }
    return calc(x,i+1);
  }
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
    cout<<calc(x,0)<<"\n";
  }
  for(int i=0;i<memo.size();i++){
    std::cout<<memo[i]<<"\n";
  }
}
/*
-15 -14 -13 -12 -11 -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
*/
