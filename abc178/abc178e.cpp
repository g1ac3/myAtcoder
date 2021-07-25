#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll INF = 1e17;
int main(){
  int N;
  cin>>N;
  //vector<ll> X(N),Y(N);
  ll xMIN = INF,yMIN = INF;
  ll xMAX = -INF,yMAX = -INF;
  rep(i,N){
    ll x,y;
    cin>>x>>y;
    xMIN = min(xMIN,x-y);
    xMAX = max(xMAX,x-y);
    yMIN = min(yMIN,x+y);
    yMAX = max(yMAX,x+y);
  }
  cout<<max(xMAX-xMIN,yMAX-yMIN)<<"\n";
}
