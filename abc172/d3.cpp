#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(ll i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N;
  cin>>N;
  vector<ll> A(N+1);
  for(int i=1;i<=N;i++){
  	for(int j=1;i*j<=N;j++) A[i*j]++;
  }
	ll ans = 0;
	rep(i,N+1) ans += i*A[i];
  cout<<ans<<"\n";
}//