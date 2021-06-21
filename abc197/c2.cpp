#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
static const int INF = INT_MAX;
int main(){
  int n,MIN = INF;
  cout<<MIN;
  cin>>n;
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int bit=0;bit<(1<<(n-1));bit++){
    int ans = 0;
    int tmp = 0;
    for(int i=0;i<=n;i++){
      if(i<n) tmp = tmp|a[i];
      if(bit & (1<<i) || i==n){
        ans = ans^tmp;
        tmp = 0;
      }
    }
    MIN = min(MIN,ans);
  }
  cout<<MIN;
}
