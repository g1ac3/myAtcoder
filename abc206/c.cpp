#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ll N;
  cin>>N;
  vector<ll> A(N);
  rep(i,N) cin>>A[i];
  sort(A.begin(),A.end());
  int st=1;
  ll sum = 0;
  rep(i,N-1){
    if(A[i]==A[i+1]){
      st++;
      continue;
    }
    sum += st*(N-i-1);
    st = 1;
  }
  cout<<sum;
}
