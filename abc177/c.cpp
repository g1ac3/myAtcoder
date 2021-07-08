#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P = pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<ll> A(N);
  rep(i,N) cin>>A[i];
  ll sum = A[N-1];
  ll ans = 0;
  for(int i=N-2;i>=0;i--){
    ans = (ans+A[i]*sum)%MOD;
    sum = (sum+A[i])%MOD;
  }
  cout<<ans;
}
