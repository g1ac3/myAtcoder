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
  bitset<100005> b;
  for(int i=0;i<N;i++){
    if(m.find(C[i])!=m.end()&&m[C[i]]>i-K&&m[C[i]]<i){
      b[m[C[i]]] = false;
      m[C[i]] = i;
      b[i] = true;
    }else{
      m[C[i]] = i;
      b[i] = true;
    }

    if(i-K>=0&&m[C[i-K]]==i-K){
      b[i-K] = false;
      m[C[i-K]]=-1;
    }
    //cout<<b.count()<<" ";
    int cnt = 0;

    for(int j=max(0,i-K);j<=i;j++){
      if(b[j]) cnt++;
    }
    MAX = max(MAX,cnt);
  }
  cout<<MAX<<"\n";
}
/*
10 6
2 3 2 3 4 2 1 2 2 1

*/
