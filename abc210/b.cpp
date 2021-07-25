#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  string s;
  cin>>n>>s;
  for(int i=0;i<n;i++){
    if(s[i]=='1'){
      if(i%2==0)cout<<"Takahashi\n";
      else cout<<"Aoki\n";
      return 0;
    }
  }
}
