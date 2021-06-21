#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  int n,x;
  string s;
  cin>>n>>x>>s;
  for(int i=0;i<n;i++){
    if(s[i] == 'o') x++;
    else x--;
    if(x<0) x=0;
  }
  cout<<x;
}
