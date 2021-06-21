#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  int A,B;
  cin>>A>>B;
  for(int i = B;i>0;i--){
    if(i*(B/i-1)>=A){
      cout<<i;
      return 0;
    }
  }
}
