#include<bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  int N;
  cin>>N;
  vector<vector<ll>> A(N,vector<ll>(5));
  vector<ll> t(5);
  ll ans = 0;
  for(int i=0;i<N;i++)for(int j=0;j<5;j++)cin>>A[i][j];
  for(int i=0;i<N-2;i++){
    for(int j=i+1;j<N-1;j++){
      for(int l=0;l<5;l++) t[l] = max(A[i][l],A[j][l]);
      for(int k=j+1;k<N;k++)for(int l=0;l<5;l++)t[l] = max(t[l],A[k][l]);
      ans = max(ans,*min_element(t.begin(),t.end()));
    }
  }
  cout<<ans;
}
