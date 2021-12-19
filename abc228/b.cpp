#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,X;
  cin>>N>>X;
  vector<int> A(N+1);
  vector<bool> used(N+1);
  rep(i,N) cin>>A[i+1];
  int x = X;
  int ans = 0;
  while(!used[x]){
    ans++;
    used[x] = true;
    x = A[x];
  }
  cout<<ans<<endl;
}
