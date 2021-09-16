#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<ll,ll>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ll H,W,N;
  cin>>H>>W>>N;
  vector<ll> A,B;
  map<ll,vector<ll>> MA,MB;
  unordered_set<ll> tmpA,tmpB;
  rep(i,N){
    ll a,b;
    cin>>a>>b;
    MA[a].emplace_back(i);
    tmpA.insert(a);
    MB[b].emplace_back(i);
    tmpB.insert(b);
  }
  for(ll x:tmpA){
    A.emplace_back(x);
  }
  for(ll x:tmpB){
    B.emplace_back(x);
  }
  sort(A.begin(),A.end());
  A.erase(unique(A.begin(),A.end()),A.end());
  sort(B.begin(),B.end());
  B.erase(unique(B.begin(),B.end()),B.end());

  vector<P> C(N);
  for(int i=0;i<(int)A.size();i++){
    for(ll x:MA[A[i]]){
      C[x].first=i+1;
    }
  }
  for(int i=0;i<(int)B.size();i++){
    for(ll x:MB[B[i]]){
      C[x].second=i+1;
    }
  }
  rep(i,N){
    cout<<C[i].first<<" "<<C[i].second<<"\n";
  }
}
/*
2 2 4
1 1
1 2
2 1
2 2

100 100 6
1 1
5 8
15 1
15 10
1 5
5 10
*/
