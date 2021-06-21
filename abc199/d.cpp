#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

vector<int> c;
vector<vector<int>> p;
unordered_set<int> s;
ll llpow(int n){
  ll a = 1;
  for(int i=0;i<n;i++) a*=3;
  return a;
}
bool nextc(int i){
  if(i < 0) return false;
  c[i]++;
  if(c[i]>2){
    if(!nextc(i-1)) return false;
    c[i] = 0;
  }
  return true;
}
bool myseek(int n){
  for(int i:s){
    for(int to:p[i]){
      if(c[i] == c[to]) return false;
    }
  }
  return true;
}
int main(){
  int n,m;
  cin>>n>>m;
  if(m == 0){
    cout<<llpow(n);
    return 0;
  }
  p.resize(n);
  for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    s.insert(a);
    s.insert(b);
    p[a].emplace_back(b);
  }
  int csize = s.size();
  c.resize(csize);
  ll sum = 0;
  do{
    //for(int x:c) cout<<x<<" ";
    //cout<<"\n";
    if(myseek(n)) sum++;
  }while(nextc(csize-1));
  //printf("%lld\n",sum*pow(3,n-csize));
  cout<<sum*llpow(n-csize);
}
