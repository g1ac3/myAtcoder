#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S,T;
  cin>>S>>T;
  T.erase((int)S.size());
  //cout<<T<<" ";
  if(S==T) cout<<"Yes\n";
  else cout<<"No\n";
}
//AC 3:17
