#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  int a;
  cin>>a;
  int b = (1.08*a);
  if(b<206) cout<<"Yay!";
  else if(b == 206) cout<<"so-so";
  else cout<<":(";
}
