#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N;
  cin>>N;
  ll ans = 0;
  for(ll a=1;a*a*a<=N;a++){
    for(ll b=a;a*b*b<=N;b++){
      ans += N/(a*b);
      ans -= (a*b)*(b-1)/(a*b);
      //printf("%lld %lld %lld\n",a,b,ans);
    }
  }
  cout<<ans<<endl;
}
