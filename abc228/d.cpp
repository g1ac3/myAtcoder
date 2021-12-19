#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  int Q;
  cin>>Q;
  ll N = 1LL<<20;
  vector<ll> A(N,-1);
  vector<int> copy(N);
  rep(i,N) copy[i] = i;
  set<int> S(copy.begin(),copy.end());
  while(Q--){
    ll t,x;
    cin>>t>>x;
    ll X = x%N;
    if(t==1){
      auto it = lower_bound(S.begin(),S.end(),X);
      if(it==S.end()){
        it = lower_bound(S.begin(),S.end(),0);
      }
      //cout<<"it : "<<*it<<endl;
      A[*it] = x;
      S.erase(*it);
    }else{
      cout<<A[X]<<endl;
    }
    //rep(i,10) cout<<A[i]<<" ";
    //cout<<endl;
  }
}
