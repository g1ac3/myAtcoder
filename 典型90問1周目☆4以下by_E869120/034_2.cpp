#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
vector<ll> A;
ll N,K;

int main(){
  cin>>N>>K;
  A.resize(N+1);
  for(int i=1;i<N+1;i++) cin>>A[i];
  ll MAX = 0;
  map<ll,ll> m;
  ll cr=1,cnt=0;
  for(int i=1;i<=N;i++){
    while(cr<=N){
      printf("%d %lld %lld %lld %lld\n",i,cr,cnt,A[cr],m[A[cr]]);
      if(m[A[cr]]==0&&cnt==K) break;
      if(m[A[cr]]==0) cnt++;
      m[A[cr]]++;
      cr++;
    }
    MAX = max(MAX,cr-i);
    if(m[A[i]]==1)cnt--;
    m[A[i]]--;
  }
  cout<<MAX;
}
