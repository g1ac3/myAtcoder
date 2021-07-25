#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S;
  cin>>S;
  int a;
  rep(i,(int)S.size()) a+=(S[i]-'0');
  if(a%9==0) cout<<"Yes\n";
  else cout<<"No\n";
}
//AC 3:36
