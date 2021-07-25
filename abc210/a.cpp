#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n,a,x,y;
  cin>>n>>a>>x>>y;
  if(n<=a){
    cout<<n*x<<"\n";
    return 0;
  }else{
    cout<<a*x+(n-a)*y<<"\n";
  }
}
