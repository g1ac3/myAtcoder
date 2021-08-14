#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const int M = 100005;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,Q;
  cin>>N;
  ll sum = 0;
  vector<ll> A(M);
  rep(i,N){
    int a;
    cin>>a;
    sum += a;
    A[a]++;
  }
  cin>>Q;
  while(Q--){
    ll b,c;
    cin>>b>>c;
    ll cnt = A[b];
    A[c] += A[b];
    A[b] = 0;
    sum += cnt*(c-b);
    cout<<sum<<"\n";
  }
}
//AC 59:27