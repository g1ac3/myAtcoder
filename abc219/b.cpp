#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<string> S(4);
  rep(i,3) cin>>S[i+1];
  string T;
  cin>>T;
  for(char t:T) cout<<S[(t-'0')];
  cout<<endl;
}
