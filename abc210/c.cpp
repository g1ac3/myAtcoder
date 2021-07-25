#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  int N,K;
  int MAX = 0;
  cin>>N>>K;
  vector<int> C(N);
  rep(i,N) cin>>C[i];
  map<int,int> m;
  vector<bool> B(N);
  int tmp;
  int cnt = 0;
  for(int i=0;i<K;i++){
    if(m.find(C[i])!=m.end()){
      tmp = m[C[i]];
      B[tmp] = false;
      cnt--;
    }
    m[C[i]] = i;
    B[i] = true;
    cnt++;
    //printf("%d %d %d %d %d\n",i,i-K,m[C[i]],B[i]==true,cnt);
  }
  MAX = max(MAX,cnt);
  //cout<<cnt<<" ";
  for(int i=K;i<N;i++){
    //printf("  %d %d %d %d %d\n",i,i-K,m[C[i]],B[i]==true,cnt);
    // for(int i=0;i<5;i++) cout<<m[i]<<" ";
    // cout<<"\n";
    if(m.find(C[i])!=m.end()&&(m[C[i]]>i-K&&m[C[i]]<i)){
      //printf("! %d %d!\n",C[i],m[C[i]]);
      tmp = m[C[i]];
      B[tmp] = false;
      cnt--;
    }
    m[C[i]] = i;
    B[i] = true;
    cnt++;
    //printf("--  %d %d\n",m[C[i-K]],i-K);
    if(m[C[i-K]]==i-K){
      //m[C[i-K]]=-1;
      m.erase(m[C[i-K]]);
      B[i-K] = false;
      cnt--;
    }
    // for(int i=0;i<5;i++) cout<<m[i]<<" ";
    // cout<<"\n";
    //cout<<cnt<<" ";
    MAX = max(MAX,cnt);
  }
  cout<<MAX<<"\n";
}
/*
10 6
2 3 2 3 4 2 1 2 2 1

*/
