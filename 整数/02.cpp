#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  int N;
  cin>>N;
  int nr = sqrt(N);
  vector<ll> ans;
  for(int i=1;i<=nr;i++){
    if(N%i==0){
      ans.emplace_back(i);
      ans.emplace_back(N/i);
    }
  }
  sort(ans.begin(),ans.end());
  for(ll x:ans) cout<<x<<" ";
  return 0;
}
