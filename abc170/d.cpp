#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  map<int,int> MAP;
  vector<int> A(N);
  rep(i,N){
    cin>>A[i];
    MAP[A[i]]++;
  }
  sort(A.begin(),A.end());
  vector<bool> used(1e6+1);
  int ans = 0;
  for(int x:A){
    if(used[x]) continue;
    if(MAP[x]==1) ans++;
    for(int i=1;x*i<=1e6;i++) used[x*i] = true;
  }
  cout<<ans<<"\n";
}
//AC 37:40 (42:40)
