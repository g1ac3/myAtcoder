#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll X,K,D;
  cin>>X>>K>>D;
  if(X<0) X *= -1;
  if(X/D>K){
    cout<<X-(D*K)<<"\n";
    return 0;
  }
  K -= X/D;
  X %= D;
  if(K%2==0){
    cout<<X<<"\n";
  }else{
    cout<<abs(X-D)<<"\n";
  }
}
//11:30
