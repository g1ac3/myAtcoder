#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  string S;
  cin>>N>>S;
  int r=0,w=0;
  rep(i,N) if(S[i]=='R') r++;
  rep(i,r) if(S[i]=='W') w++;
  cout<<w<<"\n";
}
//AC 13:13
