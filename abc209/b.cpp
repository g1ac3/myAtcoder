#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,X;
  cin>>N>>X;
  rep(i,N){
    int a;
    cin>>a;
    if(i%2!=0) a--;
    X -= a;
  }
  if(X<0) cout<<"No\n";
  else cout<<"Yes\n";
}
