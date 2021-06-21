#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  int n,q;
  string s1,s2,s;
  cin>>n>>s>>q;
  s1 = s.substr(0,n);
  s2 = s.substr(n,n);
  int t,a,b;
  int rev = 1;
  while(q--){
    cin>>t>>a>>b;
    if(t == 2){
      rev *= -1;
      continue;
    }
    if(rev > 0){
      char tmp = s[a-1];
      s[a-1] = s[b-1];
      s[b-1] = tmp;
    }else{
      char tmp = s[a-1+n];
      s[a-1+n] = s[b-1-n];
      s[b-1-n] = tmp;
    }
    cout<<s<<"\n";
  }
  if(rev<0) cout<<s.substr(n,n) + s.substr(0,n);
  else cout<<s;
}
