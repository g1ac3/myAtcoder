#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N,D;
  int cnt = 0;
  cin>>N>>D;
  D = D*D;
  rep(i,N){
    ll x,y;
    cin>>x>>y;
    x *= x;
    y *= y;
    if(x+y<=D) cnt++;
  }
  cout<<cnt<<"\n";
}//AC 2:47
