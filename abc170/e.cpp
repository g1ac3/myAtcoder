#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<ll,ll>;
#define rep(i,n) for(int i=0;i<(n);++i)
const int M = 2*1e5+10;
int main(){

  int N,Q;
  cin>>N>>Q;
  vector<P> A(N);
  rep(i,N) cin>>A[i].first>>A[i].second;
  vector<multiset<ll>> B(M);
  multiset<ll> C;
  for(auto [a,b]:A) B[b].insert(a);
  rep(i,M){
    if(B[i].size()==0) continue;
    auto it = B[i].end();
    --it;
    //cout<<(*it)<<" ";
    C.insert(*it);
  }
  while(Q--){
    /*
    cout<<"B : \n";
    rep(i,N){
      cout<<"  "<<i<<" : ";
      for(int x:B[i]) cout<<x<<" ";
      cout<<"\n";
    }
    cout<<"C : ";
    for(int x:C) cout<<x<<" ";
    cout<<"\n";
    */
    int c,d;
    bool j = false,k=false;
    cin>>c>>d;
    c--;
    auto [a,b] = A[c];
    //printf("c : %d a : %d b : %d\n",c,a,b);
    auto it = B[b].end();
    if(a== *(--it)){
      //cout<<"!!!\n";
      j = true;
      C.erase(C.find(a));
    }
    B[b].erase(B[b].find(a));
    if(j&&B[b].size()!=0){
      it = B[b].end();
      C.insert(*(--it));
    }
    if(B[d].size()!=0){
      it = B[d].end();
      k=true;
      C.erase(C.find(*(--it)));
    }
    B[d].insert(a);
    it = B[d].end();
    C.insert(*(--it));
    A[c].second = d;
    cout<<(*C.begin())<<endl;
  }
}
