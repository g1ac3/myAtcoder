#include<bits/stdc++.h>

using namespace std;
using ll = int64_t;
vector<char> tmp;
string X;
int calc(ll d,ll m){
  //printf("%lld,%lld\n",d,m);
  vector<ll> tmp;
  while(m>0){
    tmp.emplace_back(m%d);
    m /= d;
  }
  int s = (int)tmp.size();
  //for(int x:tmp) cout<<x;
  if((int)X.size() < s) return 1;
  else if((int)X.size() > s) return -1;
  else{
    for(int i=0;i<s;i++){
      if(X[i]-'0' < tmp[s-i-1]) return 1;
      else if(X[i]-'0' > tmp[s-i-1]) return -1;
      else continue;
    }
  }
  return 0;
}
int main(){
  ll M;
  cin>>X>>M;
  if(X.size() == 1){
    if(X[0]-'0' <= M) cout<<"1";
    else cout<<"0";
    return 0;
  }
  int d = 0;
  for(int i=0;i<(int)X.size();i++) d = max(d,X[i]-'0');
  ll l = d,r = M + 1;
  if(l > r){
    cout<<"0";
    return 0;
  }
  while(l+1<r){
    //printf("%lld %lld ",l,r);
    int a = calc((l+r)/2,M);
    if(a > 0) l = (l+r)/2;
    else if(a < 0) r = (l+r)/2;
    else{
      cout<<(l+r)/2 - d;
      return 0;
    }
  }
  cout<<l-d;
}
