#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,X,T;
  cin>>N>>X>>T;
  int a = (N+X-1)/X;
  cout<<a*T<<"\n";
}
//AC 2:00
