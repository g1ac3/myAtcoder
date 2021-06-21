#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  int N;
  cin>>N;
  unordered_set<int> s;
  rep(i,N){
    int tmp;
    cin>>tmp;
    if(tmp>N) continue;
    s.insert(tmp);
  }
  if(s.size()==N) cout<<"Yes";
  else cout<<"No";
}
