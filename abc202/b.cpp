#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  string s;
  cin>>s;
  for(int i=(int)s.size()-1;i>=0;i--){
    if(s[i] == '9') s[i]='6';
    else if(s[i] == '6') s[i] = '9';
    cout<<s[i];
  }
}
