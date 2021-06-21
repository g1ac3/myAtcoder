#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  int N,M;
  cin>>N>>M;
  vector<int> a(N),b(M);
  for(int &x:a) cin>>x;
  for(int &x:b) cin>>x;
  vector<int> c;
  set_symmetric_difference(a.begin(),a.end(),b.begin(),b.end(),back_inserter(c));
  for(int x:c) cout<<x<<" ";

}
