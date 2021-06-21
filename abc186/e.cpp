#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int solve(){
  ll n,s,k,cnt = 0;
  cin>>n>>s>>k;
  unordered_set<ll> set;
  while(set.count(s)==0){
    if(s == 0) return cnt;
    set.insert(s);
    s += k;
    s %= n;
    cnt++;
  }
  return -1;
}
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++) cout<<solve()<<"\n";
}
