#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ll N,Q;
  cin>>N>>Q;
  vector<pair<ll,ll>> A;
  ll tmp;
  ll as = 0;
  cin>>tmp;
  A.emplace_back(make_pair(tmp,1));
  as++;
  ll pre = tmp;
  for(int i=1;i<N;i++){
    cin>>tmp;
    if(tmp==pre+1){
      A[A.size()-1].second++;
    }else{
      A.emplace_back(make_pair(tmp-pre-1+A[A.size()-1].first,A[A.size()-1].second+1));
    }
    pre = tmp;
  }
  //for(auto [a,b]:A) cout<<a<<" "<<b<<"\n";
  ll K;
  while(Q--){
    cin>>K;
    //cout<<"---\n";
    if(A[0].first>K){
      cout<<K<<"\n";
      continue;
    }
    if(A[A.size()-1].first<=K){
      cout<<K+N<<"\n";
      continue;
    }
    //cout<<"---\n";
    int l=0,r=A.size();
    while(r-l>1){
      int c = (r+l)/2;
      //printf("%d %d %d %lld // ",l,r,c,A[c].first);
      if(A[c].first<=K) l = c;
      else r = c;
    }
    //printf("-- %d %d ",l,r);
    cout<<K+A[l].second<<"\n";
  }
}
