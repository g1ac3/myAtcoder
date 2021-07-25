#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
vector<ll> A;
map<ll,ll> m;
ll N,K,MAX=0;
int main(){
  cin>>N>>K;
  A.resize(N);
  for(int i=0;i<N;i++) cin>>A[i];
  ll cr=0,cnt=0;
  for(int i=0;i<N;i++){
    while(cr<N){
      if(m[A[cr]]==0&&cnt==K) break;
      if(m[A[cr]]==0) cnt++;
      m[A[cr]]++;
      cr++;
    }
    MAX = max(MAX,cr-i);
    m[A[i]]--;
    if(m[A[i]]==0) cnt--;
  }
  cout<<MAX;
}
