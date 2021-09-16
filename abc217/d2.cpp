#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ll L,Q;
  cin>>L>>Q;
  set<ll> A;
  A.insert(0);
  A.insert(L);
  while(Q--){
    ll c,x;
    cin>>c>>x;
    if(c==1){
      //int idx = lower_bound(A.begin(),A.end(),x)-A.begin();
      //A[idx]
      A.insert(x);
    }else{
      auto idx = A.lower_bound(x);
      cout<<(*idx--)-(*idx)<<"\n";
    }

  }
}
