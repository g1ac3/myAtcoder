#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
vector<pair<ll,ll>> at;
map<ll,ll> memo;

int main(){
  ll N,Q;
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
    ll tmp = -1;
    for(ll i=0;i<N;i++){
      ll a = at[i].first;
      ll t = at[i].second;
      if(t == 1){
        x += a;
      }else if(tmp == -1){
        if(t == 2){
          if(x<=a){
            if(memo.find(i) == memo.end()) tmp = i;
            else{
              cout<<memo[i]<<"\n";
              break;
            }
          }else{
            x = max(x,a);
          }
        }else{
          if(x>=a){
            if(memo.find(i) == memo.end()) tmp = i;
            else{
              cout<<memo[i]<<"\n";
              break;
            }
          }else{
            x = min(x,a);
          }
        }
      }else{
        if(t == 2) x = max(x,a);
        else x = min(x,a);
      }
    }
    if(tmp != -1) memo[tmp] = x;
    cout<<x<<"\n";
  }
}
