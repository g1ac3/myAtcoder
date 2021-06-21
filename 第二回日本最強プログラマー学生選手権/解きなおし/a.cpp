#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  int x,y,z;
  cin>>x>>y>>z;
  int a = (y*z+x-1)/x;
  cout<<a-1;
}
