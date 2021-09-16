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
  vector<ll> A(N-1);
  rep(i,N-1){
    int a,b;
    cin>>a>>b>>A[i];
  }
  ll ans = 0;
  sort(A.begin(),A.end());
  for(int i=0;i<N-1;i++) ans += A[i]*(i+1);
  cout<<ans<<"\n";
}
