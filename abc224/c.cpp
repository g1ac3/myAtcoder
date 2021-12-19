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
    vector<ll> E(3);
    for(int j=i+1;j<N;j++){
      E[0] = (X[i]-X[j])*(X[i]-X[j])+(Y[i]-Y[j])*(Y[i]-Y[j]);
      for(int k=j+1;k<N;k++){
        E[1] = (X[i]-X[k])*(X[i]-X[k])+(Y[i]-Y[k])*(Y[i]-Y[k]);
        E[2] = (X[k]-X[j])*(X[k]-X[j])+(Y[k]-Y[j])*(Y[k]-Y[j]);
        sort(E.begin(),E.end());
        if(E[0]<E[1]+E[2]){
          ans++;
          printf("%d %d %d   ",i,j,k);
          for(ll x:E) cout<<x<<" ";
          cout<<endl;
        }
      }
    }
  }
  cout<<ans<<endl;
}
