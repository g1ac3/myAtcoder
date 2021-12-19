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
  vector<ll> X(N),Y(N);
  rep(i,N) cin>>X[i]>>Y[i];
  set<P> S;
  rep(i,N)for(int j=i+1;j<N;j++){
    int x = X[i]-X[j];
    int y = Y[i]-Y[j];
    int c = __gcd(x,y);
    S.insert({x/c,y/c});
  }
  cout<<S.size()*2<<endl;
}
