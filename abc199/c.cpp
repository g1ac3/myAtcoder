#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  int n,q,n2;
  string s;
  cin>>n>>s>>q;
  n2 = n*2;
  int t,a,b;
  int rev = 1;
  while(q--){
    cin>>t>>a>>b;
    if(t == 2){
      rev *= -1;
      continue;
    }
    a--;b--;
    if(rev > 0){
      char tmp = s[a];
      s[a] = s[b];
      s[b] = tmp;
    }else{
      char tmp = s[(a+n)%n2];
      s[(a+n)%n2] = s[(b+n)%n2];
      s[(b+n)%n2] = tmp;
    }
    /*
    if(t == 2){
      //s = s.substr(n,n) + s.substr(0,n);
      rev *= -1;
    }else if(rev>0){
      char tmp = s[a-1];
      s[a-1] = s[b-1];
      s[b-1] = tmp;
    }else{
      char tmp = s[a-1+n];
      s[a-1+n] = s[b-1-n];
      s[b-1-n] = tmp;
    }
    */
    //cout<<s<<"\n";
  }
  if(rev<0) cout<<s.substr(n,n) + s.substr(0,n);
  else cout<<s;
}
