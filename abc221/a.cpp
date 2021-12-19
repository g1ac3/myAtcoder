#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a,b;
  cin>>a>>b;
  ll ans = 1;
  while(a!=b){
    b++;
    ans *= 32;
  }
  cout<<ans<<endl;
}
