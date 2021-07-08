#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P = pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S,T;
  cin>>S>>T;
  int MIN = 10000;
  for(int i=0;i<=S.size()-T.size();i++){
    int cnt = 0;
    for(int j=0;j<T.size();j++){
      if(S[i+j]!=T[j]) cnt++;
    }
    MIN = min(MIN,cnt);
  }
  cout<<MIN;
}
