#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N;
  cin>>N;
  ll s = sqrt(N);
  vector<ll> A,B;
  for(ll i=1;i<=s;i++){
    if(N%i!=0)continue;
    A.emplace_back(i);
    if(i==N/i) continue;
    B.emplace_back(N/i);
  }
  for(ll x:A) cout<<x<<"\n";
  for(ll i=B.size()-1;i>=0;--i) cout<<B[i]<<"\n";
}
