#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
vector<int> a;
vector<int> b;
vector<int> c;
unordered_set<int> s;

void mser(int i,int m){
  for(int j=0;j<m;j++){
    if(a[i] == b[j]){
      s.erase(a[i]);
      return;
    }
  }
}
int main(){
  int n,m;
  cin>>n>>m;
  a.resize(n);
  b.resize(m);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<m;i++) cin>>b[i];
  for(int x:a) s.insert(x);
  for(int x:b) s.insert(x);
  for(int i=0;i<n;i++){
    mser(i,m);
  }
  for(int x:s) c.emplace_back(x);
  sort(c.begin(),c.end());
  for(int x:c) cout<<x<<" ";
}
