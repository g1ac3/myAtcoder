#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const int INF = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  vector<int> A(N),B(M);
  rep(i,N) cin>>A[i];
  rep(i,M) cin>>B[i];
  sort(A.begin(),A.end());
  sort(B.begin(),B.end());
  /*
  rep(i,N) cout<<A[i]<<" ";
  cout<<"\n";
  rep(i,M) cout<<B[i]<<" ";
  */
  int i=0,j=0;
  int MIN = INF;
  while(i<N&&j<M){
    MIN = min(MIN,abs(A[i]-B[j]));
    if(A[i]<B[j]) i++;
    else j++;
  }
  cout<<MIN<<"\n";
}
