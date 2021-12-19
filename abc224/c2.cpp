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
  int ans = 0;
  rep(i,N) cin>>X[i]>>Y[i];
  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
      ll a = X[i]-X[j];
      ll b = Y[i]-Y[j];
      for(int k=j+1;k<N;k++){
        ll c = X[j]-X[k];
        ll d = Y[j]-Y[k];
        if(c*b!=a*d){
          ans++;
          //printf("%d %d %d   ",i,j,k);
        }
      }
    }
  }
  cout<<ans<<endl;
}
