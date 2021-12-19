#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,K;
  cin>>N>>K;
  vector<string> A(N);
  rep(i,N) cin>>A[i];
  sort(A.begin(),A.end());
  rep(i,K) cout<<A[i];

}
/*
4 3
ode
zaaa
r
atc

*/
