#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<ll,ll>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ll H,W,N;
  cin>>H>>W>>N;
  vector<P> A(N),B(N);
  //vector<vector<ll>>
  rep(i,N){
    ll a,b;
    cin>>a>>b;
    A[i] = {a,i};
    B[i] = {b,i};
  }
  sort(A.begin(),A.end());
  sort(B.begin(),B.end());
  vector<P> C(N);
  rep(i,N){
    C[A[i].second].first=i+1;
    C[B[i].second].second=i+1;
  }
  rep(i,N){
    cout<<C[i].first<<" "<<C[i].second<<"\n";
  }
}
/*
2 2 4
1 1
1 2
2 1
2 2
*/
