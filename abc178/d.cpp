#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
map<int,int> memo;
ll solve(int s){
  if(s < 3) return 0;
  if(s < 6) return 1;
  if(memo.find(s)!=memo.end()) return memo[s];
  ll sum = 1;
  for(int i=3;i<=s-3;i++){
    sum = (sum+solve(i))%MOD;
  }
  return memo[s] = sum;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int S;
  cin>>S;
  cout<<solve(S);
}
//AC
