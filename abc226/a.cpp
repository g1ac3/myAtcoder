#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin>>s;
  int a = s[s.size()-3]-'0';
  //cout<<a<<"\n";
  int ans = stoi(s.substr(0,s.size()-4));
  if(a>4){
    ans++;
  }
  cout<<ans<<endl;
}
