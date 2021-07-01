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
  bool t = true;
  while(t){
    t = false;
    //printf("%lld %d %lld\n",X,X<(B/(A-1)),(Y-X)/B);
    if(X<(B/(A-1))&&X*A<Y){
      X *= A;
      sum++;
      t = true;
    }else if((Y-X-1)/B>0){
      sum += (Y-X-1)/B;
      X += ((Y-X-1)/B)*B;
      t = true;
    }
  }
  cout<<sum;
}
//AC
