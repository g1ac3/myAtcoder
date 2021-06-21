#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  string s;
  cin>>s;
  int i=0;
  while(s[i] != '.'){
    cout<<s[i++];
    if(i == s.size()) return 0;
  }
}
