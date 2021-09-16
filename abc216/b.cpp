#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  map<pair<string,string>,int> MAP;
  bool b = false;
  rep(i,N){
    string S,T;
    cin>>S>>T;
    MAP[{S,T}]++;
    if(MAP[{S,T}]>1) b = true;
  }
  if(b) cout<<"Yes\n";
  else cout<<"No\n";
}
