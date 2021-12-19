#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll X;
  cin>>X;
  for(ll a=1;a<1e3;a++){
    ll b5 = X-pow(a,5);
    printf("%d %d\n",a,b5);
  }
}
