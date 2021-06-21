#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  ll n,w;
  cin>>n>>w;
  vector<pair<ll,ll>> S,T;
  for(int i=0;i<n;i++){
    ll s,t,p;
    cin>>s>>t>>p;
    S.emplace_back(s,p);
    T.emplace_back(t,-p);
  }
  sort(S.begin(),S.end());
  sort(T.begin(),T.end());
  int i=0,j=0;
  ll pt = 0;
  while(i!=n && j!=n){
    if(S[i].first < T[j].first) pt += S[i++].second;
    else pt += T[j++].second;
    //printf("%lld %d %d\n",pt,i,j);
    if(pt > w){
      cout<<"No";
      return 0;
    }
  }
  cout<<"Yes";
  return 0;
}
