#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S;
  cin>>S;
  reverse(S.begin(),S.end());
  if(S.size()>2){
    if(S.substr(0,2)=="re") cout<<"er\n";
    else cout<<"ist\n";
  }else{
    cout<<"er\n";
  }
}
