#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  multiset<int> s{1,1,2,3,4,4,5};
  for(int x:s) cout<<x<<" ";
  cout<<"\n";
  s.erase(s.begin());
  for(int x:s) cout<<x<<" ";
  cout<<"\n";
}
