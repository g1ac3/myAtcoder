#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll A,B=0;
  string tmp;
  cin>>A>>tmp;
  int ax = 1;
  for(int i=(int)tmp.size()-1;i>=0;i--){
    if(tmp[i]=='.') continue;
    B += ax*(tmp[i]-'0');
    ax *= 10;
  }
  cout<<(A*B)/100<<"\n";
}
//AC 20:05
