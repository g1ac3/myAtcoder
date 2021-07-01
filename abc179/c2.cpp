#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N;
  cin>>N;
  ll sum = 0;
  for(int i=1;i<N;i++){
    sum += (N-1)/i;
  }
  cout<<sum;
}
