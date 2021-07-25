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
  vector<ll> A(N+1);
  rep(i,N) cin>>A[i+1];
  rep(i,N) A[i+1] += A[i];
  if(A[N]%10!=0){
    cout<<"No";
    return 0;
  }
  ll sum = A[N]/10;
  int s = 0,f = 1;
  ll ans;
  while(s<N){
    if(f>N) f = 1;
    if(f<s) ans = A[N] - A[s] + A[f];
    else ans = A[f]-A[s];
    //printf("%d %d %lld\n",s,f,ans);
    if(ans<sum) f++;
    else if(ans>sum) s++;
    else{
      cout<<"Yes";
      return 0;
    }
  }
  cout<<"No";
}
