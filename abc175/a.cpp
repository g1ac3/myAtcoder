#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int st = 0;
  int m = 0;
  rep(i,3){
    char c;
    cin>>c;
    if(c =='R') st++;
    else{
      m = max(m,st);
      st = 0;
    }
  }
  cout<<max(m,st)<<"\n";
}
//2:26
