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
  int cnt = 0;
  for(int i=0;i<N;i++){
    if(m.find(C[i])!=m.end()&&(m[C[i]]>=i-K&&m[C[i]]<i)){
      m[C[i]] = i;
    }else{
      m[C[i]] = i;
      cnt++;
    }
    if(i-K>=0&&m[C[i-K]]==i-K){
      m[C[i-K]]=-1;
      //m.erase(m[C[i-K]]);
      cnt--;
    }
    //cout<<cnt<<" ";
    MAX = max(MAX,cnt);
  }
  cout<<MAX<<"\n";
}
