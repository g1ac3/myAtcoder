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
  cin>>s;
  bool b = false;
  if(s[0]==s[1]&&s[0]==s[2]&&s[0]==s[3]) b=true;
  if(b){
    cout<<"Weak\n";
    return 0;
  }
  int a = s[0]-'0';
  if(s[1]-'0'==(a+1)%10&&s[2]-'0'==(a+2)%10&&s[3]-'0'==(a+3)%10) b = true;
  if(b){
    cout<<"Weak\n";
    return 0;
  }
  cout<<"Strong\n";
}
