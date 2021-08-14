#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  unordered_set<string> set;
  rep(i,4){
    cin>>s;
    set.insert(s);
  }
  if(set.size()==4) cout<<"Yes\n";
  else cout<<"No\n";
}
