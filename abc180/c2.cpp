#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N;
  cin>>N;
  ll s = sqrt(N);
  cout<<s<<" \n\n";
  unordered_set<int> set;
  vector<int> A;
  for(ll i=1;i<s+2;i++){
    if(N%i!=0) continue;
    set.insert(i);
    set.insert((int)(N/i));
  }
  for(int x:set) A.emplace_back(x);
  sort(A.begin(),A.end());
  for(int x:A) cout<<x<<"\n";
}
//AC
