#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<pair<ll,ll>> A;
  rep(i,N){
    ll x,y;
    cin>>x>>y;
    A.emplace_back(make_pair(x,y));
  }
  ll x = A[0].first;
  ll y = A[0].second;
  vector<ll> B(4);
  for(int i=1;i<N;i++){
    ll dx = x - A[i].first;
    ll dy = y - A[i].second;
    if(dx > 0) B[0] = max(B[0],dx);
    else B[1] = max(B[1],-dx);
    if(dy > 0) B[2] = max(B[2],dy);
    else B[3] = max(B[3],-dy);
  }
  for(int x:B)cout<<x<<" ";
  cout<<"\n";
  cout<<accumulate(B.begin(),B.end(),0);
}
//WA
