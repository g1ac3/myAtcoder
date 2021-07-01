#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 998244353;

int main(){
  int N,K;
  cin>>N>>K;
  vector<int> A;
  vector<ll> dp(N);
  rep(i,K){
    int a,b;
    cin>>a>>b;
    for(int j=a;j<=b;j++) A.emplace_back(j);
  }
  sort(A.begin(),A.end());
  dp[0]=1;
  for(int i=0;i<N-1;i++){
    for(int x:A){
      if(x+i>=N) break;
      dp[x+i] = (dp[x+i]+dp[i])%MOD;
    }
    /*
    for(int x:dp) printf("%3d",x);
    cout<<"\n";
    */
  }
  cout<<dp[N-1]%MOD;
}
