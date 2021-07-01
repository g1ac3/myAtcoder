#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ll N,X,M;
  cin>>N>>X>>M;
  vector<ll> id(M,-1);
  ll sum = 0;
  int i=0;
  while(id[X]==-1&&i<N){
    id[X] = i++;
    sum += X;
    X = (X*X)%M;
  }
  if(id[X]==-1){
    cout<<sum;
    return 0;
  }
  int t = i-id[X];
  ll tot = 0;
  rep(j,t){
    tot += X;
    X = (X*X)%M;
  }
  ll n = N-id[X];
  ll ans = sum+tot*(n/t-1);
  rep(j,n%t){
    //printf("%d %d\n",j,X);
    //cout<<X<<" ";
    ans += X;
    X = (X*X)%M;
  }
  cout<<ans;
}
//AC
