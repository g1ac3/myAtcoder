#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(a==b) cout<<c;
  else if(a==c) cout<<b;
  else if(c==b) cout<<a;
  else cout<<"0";
}
