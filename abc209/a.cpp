#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a,b;
  cin>>a>>b;
  if(b<a) cout<<"0\n";
  else cout<<b-a+1<<"\n";
}
