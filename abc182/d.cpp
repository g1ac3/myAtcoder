#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  int n;
  cin>>n;
  vector<ll> A(n);
  for(int i=0;i<n;i++) cin>>A[i];
  ll MAX = 0;
  ll now = 0;
  ll pre = 0;
  ll ad = 0;
  ll sum = 0;
  for(int i=0;i<n;i++){
    sum += A[i];
    now += sum;
    ad = max(ad,sum);
    MAX = max(MAX,max(now,pre+ad));
    //printf("%lld %lld %lld %lld %lld\n",pre,now,sum,ad,MAX);
    pre = now;
  }
  cout<<MAX;
}
