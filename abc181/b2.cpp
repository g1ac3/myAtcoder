#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  const int M = 1000001;
  vector<int> A(M);
  int a,b;
  rep(i,N){
    cin>>a>>b;
    A[a]++;
    A[b+1]--;
  }
  ll sum = 0;
  ll x = 0;
  rep(i,M){
    x += A[i];
    sum += (i*x);
  }
  cout<<sum;
}
//AC
