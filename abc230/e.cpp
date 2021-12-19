#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N,M=1000005;
  ll ans = 0;
  cin>>N;
  vector<int> A(M),B(M);
  ll pre = N;
  for(ll i=1;i*i<=N;i++){
    ll x = N/i;
    A[i] = x;
    ans += N/i;

  }
  for(ll i=2;i*i<=N;i++){
    ans += (i-1)*(A[i-1]-A[i]);
    printf("%lld : %lld\n",i-1,(i-1)*(A[i-1]-A[i]));
  }

  cout<<ans<<endl;
  //for(int i=0;i<=N;i++) printf("%3d",i);
  //for(int x:A) printf("%3d",x);
  //for(int i=1;i<)
}
