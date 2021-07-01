#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  const int M = 4;
  vector<pair<ll,ll>> P(M);
  ll xmax=INT_MIN,xmin=INT_MAX,ymax=INT_MIN,ymin=INT_MAX;
  rep(i,N){
    ll a,b;
    cin>>a>>b;
    if(a>xmax){
      xmax = a;
      P[0].first = a;
      P[0].second = b;
    }
    if(a<xmin){
      xmin = a;
      P[1].first = a;
      P[1].second = b;
    }
    if(b>ymax){
      ymax = b;
      P[2].first = a;
      P[2].second = b;
    }
    if(b<ymin){
      ymin = b;
      P[3].first = a;
      P[3].second = b;
    }
  }
  ll MAX = 0;
  for(int i=0;i<M-1;i++){
    for(int j=i+1;j<M;j++){
      MAX = max(MAX,abs(P[i].first-P[j].first)+abs(P[i].second-P[j].second));
    }
  }
  cout<<MAX;
}
//WA
