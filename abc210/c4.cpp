#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
  int N,K;
  int MAX = 0;
  cin>>N>>K;
  vector<int> C(N);
  rep(i,N) cin>>C[i];
  map<int,int> m;
  int cnt = 0;
  for(int i=0;i<N;i++){
    m[C[i]]++;
    if(m[C[i]]==1) cnt++;
    if(i-K>=0){
      if(m[C[i-K]]==1) cnt--;
      m[C[i-K]]--;
    }
    MAX = max(MAX,cnt);
  }
  cout<<MAX<<"\n";
}
