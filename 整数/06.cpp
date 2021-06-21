#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
ll MOD = 1000000007;
int main(){
  int N;
  cin>>N;
  vector<int> ans(N+1);
  for(int i=2;i<=N;i++){
    int n = i;
    int j = 2;
    while(n>1&&j*j<=n){
      if(n%j==0){
        n/=j;
        ans[j]++;
        continue;
      }
      j++;
    }
    ans[n]++;
  }
  //for(int x:ans) cout<<x<<" ";
  ll mul = 1;
  for(int x:ans) mul = (mul*(x+1))%MOD;
  cout<<mul;
}
