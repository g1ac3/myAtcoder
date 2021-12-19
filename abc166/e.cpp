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
  vector<int> A(N);
  map<int,int> M;
  ll ans = 0;
  rep(i,N) cin>>A[i];
  rep(i,N) M[A[i]+i]++;
  rep(i,N) ans += M[i-A[i]];
  cout<<ans<<endl;
}
//AC 1:21:50
