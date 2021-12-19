#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<ll,ll>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N,D;
  cin>>N>>D;
  vector<P> A(N);
  rep(i,N) cin>>A[i].second>>A[i].first;
  sort(A.begin(),A.end());
  vector<bool> used(N);
  int cnt = 0;
  for(ll i=0;i<N;i++){
    if(used[i]) continue;
    used[i] = true;
    cnt++;
    ll r = A[i].first;
    for(ll j=i+1;j<N;j++){
      //printf("%lld %lld: %lld %lld\n",i,j,A[j].first, r+D);
      if(A[j].first<r+D || A[j].second<r+D) used[j]=true;
      else break;
    }
  }
  cout<<cnt<<endl;
}
