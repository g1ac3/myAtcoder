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
  vector<int> A(N);
  rep(i,N)rep(j,3){
    int a;
    cin>>a;
    A[i]+=a;
  }
  vector<int> B = A;
  sort(B.rbegin(),B.rend());
  int x = B[K-1]-300;
  rep(i,N){
    //cout<<A[i]<<" ";
    if(A[i]<x) cout<<"No\n";
    else cout<<"Yes\n";
  }
}
