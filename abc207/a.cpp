#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<int> A(3);
  rep(i,3) cin>>A[i];
  sort(A.begin(),A.end());
  cout<<A[1]+A[2];

}
