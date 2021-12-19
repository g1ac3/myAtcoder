#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  vector<ll> H(N);
  rep(i,N) cin>>H[i];
  vector<ll> A(N);
  rep(i,M){
    int a,b;
    cin>>a>>b;
    --a;--b;
    if(H[a]>=H[b]) A[b]++;
    if(H[a]<=H[b]) A[a]++;
  }
  ll ans = 0;
  rep(i,N) ans+=(A[i]==0);
  cout<<ans<<endl;
}
//AC 21:00 + 15
