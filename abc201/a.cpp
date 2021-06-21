#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  ll a,b,c;
  cin>>a>>b>>c;
  if(a-b==b-c||a-c==c-b||b-c==c-a||b-a==a-c||b-c==c-a||c-a==a-b||c-b==c-a) cout<<"Yes";
  else cout<<"No";
}
