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
  vector<ll> A(N),B(N);
  rep(i,N)cin>>A[i]>>B[i];
  map<ll,ll> X;
  set<ll> M;
  rep(i,N){
    X[A[i]]++;
    X[A[i]+B[i]]--;
    M.insert(A[i]);
    M.insert(A[i]+B[i]);
  }
  map<ll,ll> Xtox;
  int cnt = 1;
  for(ll x:M) Xtox[x] = cnt++;
  /*
  for(int x:M) cout<<Xtox[x]<<" ";
  cout<<"\n";
  for(int x:M) cout<<x<<" ";
  */
  vector<ll> C(2*N);
  for(ll x:M) C[Xtox[x]] += X[x];
  rep(i,2*N-1) C[i+1] += C[i];
  /*
  for(int x:C) cout<<x<<" ";
  cout<<"\n";
  for(int x:C) cout<<x<<" ";
  cout<<"\n";
  */
  vector<ll> ans(N+1);
  vector<ll> xtoX(1,0);
  for(ll x:M) xtoX.emplace_back(x);
  //for(ll x:xtoX) cout<<x<<" ";
  //cout<<"\n";
  rep(i,2*N){
    if(C[i]==0) continue;
    ans[C[i]] += (xtoX[i+1]-xtoX[i]);
  }
  for(int i=1;i<=N;i++) cout<<ans[i]<<" ";
  cout<<endl;
}
/*
5
5 75
1050 1
59 41
77 34
59 40

*/
