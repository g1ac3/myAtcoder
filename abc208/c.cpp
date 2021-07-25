#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<ll,ll>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N,K;
  cin>>N>>K;
  vector<P> A(N);
  rep(i,N){
    cin>>A[i].first;
    A[i].second = i;
  }
  sort(A.begin(),A.end());
  ll all = K/N;
  K %= N;
  vector<ll> B(N,0);
  rep(i,K){
    B[A[i].second]++;
  }
  rep(i,N){
    cout<<all+B[i]<<"\n";
  }
}
//AC
