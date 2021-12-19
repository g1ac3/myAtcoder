#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)

ll f(ll k,string a){
  int b = 1;
  ll ans = 0;
  for(int i=(int)a.size()-1;i>=0;i--){
    ans += b*(a[i]-'0');
    b*=k;
  }
  return ans;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll K;
  string A,B;
  cin>>K>>A>>B;
  cout<<f(K,A)*f(K,B)<<endl;
}
