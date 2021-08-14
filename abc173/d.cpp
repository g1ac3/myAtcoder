#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<ll> A(N);
  rep(i,N) cin>>A[i];
  sort(A.begin(),A.end());
  reverse(A.begin(),A.end());
  ll ans=0;
  for(int i=N-1;i>0;i--) ans += A[i/2];
  cout<<ans<<"\n";
}
//AC 32:30
