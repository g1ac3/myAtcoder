#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N,M=1000005;
  ll ans = 0;
  cin>>N;
  vector<int> A(M),B(M);
  ll pre = N,i=1,tmp=0;
  set<ll> S;
  do{
    ll x = N/i;
    ans += x;
    S.insert(x);
    tmp += pre-x;
    //if(i+tmp>=N) break;
    if(S.find(i-1) != S.end()) ans -= i-1;
    ans += (pre-x)*(i-1);
    //printf("%lld : %lld %lld\n",i,x,(pre-x)*(i-1));
    //A[N/i]++;
    pre = x;
    i++;
  }while(i+tmp<=N);

  cout<<ans<<endl;
  //for(int i=0;i<=N;i++) printf("%3d",i);
  //for(int x:A) printf("%3d",x);
  //for(int i=1;i<)
}
