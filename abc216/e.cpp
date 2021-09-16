#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N,K;
  cin>>N>>K;
  vector<ll> A(N);
  rep(i,N) cin>>A[i];
  ll l=-1,r=1e10;
  while(r-l>1){
    ll c = (r+l)/2;
    //printf("%lld %lld %lld\n",l,r,c);
    ll sum = 0;
    rep(i,N) sum += max(A[i]-c,0LL);
    if(sum<=K) r = c;
    else l = c;
  }
  ll sum = 0;
  int cnt = 0;
  rep(i,N){
    if(A[i]<=r) continue;
    cnt++;
    ll c = A[i]-r;
    K-=c;
    sum += c*A[i]-((c*(c-1))/2);
    A[i] = r;
  }
  sum += K*r;
  //printf("r : %lld K : %lld\n",r,K);
  cout<<sum<<endl;
}
