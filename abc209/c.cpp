#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<int> C(N);
  rep(i,N) cin>>C[i];
  sort(C.begin(),C.end());
  ll ans = C[0];
  for(int i=1;i<N;i++){
    ans = (ans*(C[i]-i))%MOD;
  }
  cout<<ans<<"\n";
}
