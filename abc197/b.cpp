#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
vector<string> s;
int main(){
  int h,w,x,y;
  cin>>h>>w>>x>>y;
  for(int i=0;i<h;i++){
    string tmp;
    cin>>tmp;
    s.emplace_back(tmp);
  }
  int ans = 1;
  int n = y-2;
  while(n>=0 && s[x-1][n] == '.'){
    ans++;
    n--;
  }
  n = y;
  while(n<w && s[x-1][n] == '.'){
    ans++;
    n++;
  }
  n = x-2;
  while(n>=0 && s[n][y-1] == '.'){
    ans++;
    n--;
  }
  n = x;
  while(n<h && s[n][y-1] == '.'){
    ans++;
    n++;
  }
  cout<<ans;
}
