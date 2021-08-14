#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<ll,ll>;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll MOD = 1e9+7;
const ll MOD2 = MOD*MOD;

int main(){
  int N,K;
  cin>>N>>K;
  vector<ll> A(N);
  rep(i,N) cin>>A[i];
  if(N==K){
    ll ans = 1;
    rep(i,N){
      ans *= A[i];
      if(ans<0) ans = (ans+MOD2)%MOD;
      else ans%=MOD;
    }
    cout<<ans<<"\n";
    return 0;
  }
  int s=0,h=0;
  rep(i,N){
    if(A[i]<0) h++;
    else s++;
  }
  if(){
    vector<ll> B(N);
    rep(i,N) B[i] = abs(A[i]);
    sort(B.begin(),B.end());

  }else{

  }
}
