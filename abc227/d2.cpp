#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  int N,K;
  cin>>N>>K;
  multiset<ll> M;
  rep(i,N){
    ll a;
    cin>>a;
    M.insert(a);
  }
  ll ans = 0;
  while(M.size()>=K){
    ll a = *M.begin();
    cout<<a<<" ";
    M.()
    M.erase(0);
  }
  cout<<ans<<endl;
}
