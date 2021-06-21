#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
vector<ll> a;
vector<vector<ll>> dp;
ll calc(int l,int r){
  printf("  %d %d\n",l,r);
  int ans = 0;
  for(int i=l;i<=r;i++) ans = ans|a[i];
  return ans;
}
ll solve(int l,int r){
  if(l == r-1) return a[l];
  else{
    printf("%d %d\n",l,r);
    for(int i=l;i<r;i++){
      calc(l,i)^solve(i+1,r);
    }
  }
}
int main(){
  int n;
  cin>>n;
  a.resize(n);
  dp.resize(n);
  vector<ll> min;
  for(int i=0;i<n;i++) dp[i].resize(n);
  for(int i=0;i<n;i++) cin>>a[i];
  solve(0,n);
  for(int i=0;i<n;i++){
    for(int x:dp[i]) cout<<x<<" ";
    cout<<"\n";
  }

}
