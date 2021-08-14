#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N;
  cin>>N;
  vector<ll> A(N+1,-1);
  vector<bool> used(N+1);
  A[1] = 1;
  for(ll i=2;i<=N;i++){
    //if(used[i]) continue;
    //used[i] = true;
    if(A[i]<0) A[i] = 2;
    for(ll j=2;j<i&&j*i<=N;j++){
      //printf("%d %d\n",i,j);
      if(A[i*j]>0) continue;
      A[i*j] = A[i]*A[j];
      used[i*j] = true;
    }
    for(ll j=1,k=i*i;k<=N;j++,k*=i) A[k] = 2+j;
  }
  ll ans = 0;
  for(ll i=1;i<=N;i++){
    printf("%d %d\n",i,A[i]);
    ans += i*A[i];
  }
  cout<<ans<<"\n";
}