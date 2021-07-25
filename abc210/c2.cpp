#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  int N,K;
  int MAX = 0;
  cin>>N>>K;
  vector<int> C(N+1);
  rep(i,N) cin>>C[i+1];
  map<int,int> m;
  int cnt = 0;
  for(int i=1;i<N+1;i++){
    if(m[C[i]]<max(1,i-K)) cnt++;
    m[C[i]] = i;
    if(i-K>0&&m[C[i-K]]==i-K)cnt--;
    MAX = max(MAX,cnt);
  }
  cout<<MAX<<"\n";
}
