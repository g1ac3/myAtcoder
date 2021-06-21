#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
int n;
ll k;
vector<vector<ll>> t;
vector<int> a;

int main(){
  cin>>n>>k;
  t.resize(n);
  a.resize(n-1);
  for(int i=0;i<n;i++) t[i].resize(n);
  for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>t[i][j];
  int cnt = 0;
  int prei = 0;
  for(int i=0;i<n-1;i++) a[i] = i+1;
  do{
    ll time = 0;
    for(int i=0;i<n-1;i++){
      time += t[prei][a[i]];
      prei = a[i];
    }
    time += t[prei][0];
    prei = 0;
    if(time == k) cnt++;
  }while(next_permutation(a.begin(),a.end()));

  cout<<cnt;
}
