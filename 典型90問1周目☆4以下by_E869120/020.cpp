#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
ll mypow(ll a,ll b){
  ll ans = 1;
  for(int i=0;i<b;i++) ans*=a;
  return ans;
}
int main(){
  ll a,b,c;
  cin>>a>>b>>c;
  if(a<mypow(c,b)) cout<<"Yes";
  else cout<<"No";

}
