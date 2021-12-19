#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ll N;
  cin>>N;
  vector<int> A;
  ll n = N;
  for(ll i=2;i*i<=N;i++){
    int cnt = 0;
    while(n%i==0){
      n/=i;
      cnt++;
    }
    if(cnt!=0)A.emplace_back(cnt);
  }
  if(n!=1)A.emplace_back(1);
  ll ans = 0;
  //cout<<A.size()<<"\n";
  for(ll x:A){
    //cout<<x<<" ";
    ans += ((int)sqrt(1+8*x)-1)/2;
  }
  cout<<ans<<"\n";
}
//AC 48:13
