#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i,n) for(int i=0;i<(n);++i)
const int INF = 1e9;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,K;
  cin>>N>>K;
  vector<int> A(N);
  rep(i,N) cin>>A[i];
  sort(A.begin(),A.end());

  ll l = 0,r = INF+1;
  while(r-l>1){
    ll c = (r+l)/2;
    int k = 0;
    for(int i=0;i<N;i++){
      k += (A[i]+c-1)/c -1;
    }

    //printf("%d %d %d -- %d\n",l,r,c,k);
    if(k<=K) r = c;
    else l = c;
  }
  cout<<r<<"\n";
}
