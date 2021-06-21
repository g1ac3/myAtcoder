#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ll N;
  cin>>N;
  vector<int> A(N);
  unordered_set<int> s;
  int sum = 0;
  rep(i,N) cin>>A[i];
  rep(i,N/2){
    int b = A[i];
    int c = A[N-1-i];
    if(b==c) continue;
    s.insert(b);s.insert(c);
    sum++;
  }
  if(s.size() == 0) cout<<"0";
  else if((int)s.size()-1<sum) cout<<s.size()-1;
  else cout<<sum;
}
