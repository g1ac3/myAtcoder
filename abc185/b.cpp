#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  ll bat,m,t;
  cin>>bat>>m>>t;
  ll now = 0;
  ll n = bat;
  while(m--){
    ll a,b;
    cin>>a>>b;
    n -=(a-now);
    if(n <= 0){
      cout<<"No";
      return 0;
    }
    n += (b-a);
    if(n > bat) n = bat;
    now = b;
  }
  n -=(t-now);
  if(n <= 0){
    cout<<"No";
    return 0;
  }
  cout<<"Yes";
}
