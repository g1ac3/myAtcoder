#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ll L,Q;
  cin>>L>>Q;
  vector<ll> A;
  A.emplace_back(0);
  A.emplace_back(L);
  while(Q--){
    ll c,x;
    cin>>c>>x;
    if(c==1){
      //int idx = lower_bound(A.begin(),A.end(),x)-A.begin();
      //A[idx]
      A.emplace_back(x);
    }else{
      //sort(A.begin(),A.end());
      int idx = lower_bound(A.begin(),A.end(),x)-A.begin()-1;
      int r = A[idx+1];
      int l = A[idx];
      //printf("lidx %d\n",idx);
      cout<<r-l<<"\n";
    }
    /*
    for(ll a:A) cout<<a<<" ";
    cout<<"\n";
    */
  }
}
