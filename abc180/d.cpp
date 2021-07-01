#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll X,Y,A,B;
  cin>>X>>Y>>A>>B;
  ll sum = 0;
  while(((Y-X)>B)||(((Y-X)/A)>0)){
    printf("%lld\n",Y);
    if(((Y-X)/A)<B){
      Y = (Y-X)/B;
      sum++;
    }else{
      sum += (Y-X)/B;
      Y = Y -((Y-X)%B);
    }
  }
  cout<<sum;
}
//WA LOOP
