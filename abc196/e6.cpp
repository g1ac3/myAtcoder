#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
static const ll INF = 1001001001;
ll N,Q,tmp;

int main(){
  cin>>N;
  ll low = -INF;
  ll high = INF;
  ll ori = 0;
  for(int i=0;i<N;i++){
    ll a,t;
    cin>>a>>t;
    if(t == 1){
      low += a;
      high += a;
      ori += a;
    }else if(t == 2){
      low = max(low,a);
      high = max(high,a);
    }else if(t == 3){
      high = min(high,a);
      low = min(low,a);
    }
  }
  cin>>Q;
  ll x;
  while(Q--){
    cin>>x;
    x+=ori;
    if(x <= low) cout<<low<<"\n";
    else if(x>=high) cout<<high<<"\n";
    else cout<<x<<"\n";
  }
  return 0;
}
