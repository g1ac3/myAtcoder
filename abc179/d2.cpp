#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 998244353;

int main(){
  int N,K;
  cin>>N>>K;
  vector<pair<int,int>> A;
  vector<ll> dp(N+1);
  rep(i,K){
    int a,b;
    cin>>a>>b;
    A.emplace_back(make_pair(a,b+1));
  }
  sort(A.begin(),A.end());
  dp[0]=1;
  for(int i=0;i<N-1;i++){
    for(auto [a,b]:A){
      
    }

  }
  cout<<dp[N-1]%MOD;
}
