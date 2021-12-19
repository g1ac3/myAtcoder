#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<ll> A(N);
  rep(i,N) cin>>A[i];
  ll X;
  cin>>X;
  ll c = 0;
  rep(i,N) c += A[i];
  ll ans = 0;
  ans = (X/c)*N;
  ll a = X%c;
  rep(i,N){
    if(a<0) break;
    a -= A[i];
    ans++;
  }
  cout<<ans<<endl;
}
