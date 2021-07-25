#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<int> X(N),Y(N);
  rep(i,N) cin>>X[i]>>Y[i];
  sort(X.begin(),X.end());
  sort(Y.begin(),Y.end());
  ll cx = X[N/2],cy = Y[N/2];
  ll sum = 0;
  rep(i,N)sum += (abs(cx-X[i])+abs(cy-Y[i]));
  cout<<sum;
}
//AC
