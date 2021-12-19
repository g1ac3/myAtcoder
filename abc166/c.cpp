#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  vector<int> H(N);
  rep(i,N) cin>>H[i];
  vector<vector<int>> E(N);
  rep(i,M){
    int a,b;
    cin>>a>>b;
    --a;--b;
    E[a].emplace_back(b);
    E[b].emplace_back(a);
  }
  vector<int> A(N);
  rep(i,N){
    for(int x:E[i]){
      if(H[i]<=H[x])A[i]++;
      if(H[i]>=H[x])A[x]++;
    }
  }
  int ans = 0;
  rep(i,N) ans+=(A[i]==0);
  cout<<ans<<endl;
}
//WA 15:15
