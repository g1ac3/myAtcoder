#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  int N,Q;
  cin>>N>>Q;
  cout<<N<<" "<<Q<<"\n";
  for(int i=0;i<N;i++){
    cout<<(i+1)*2<<" ";
  }
  cout<<"\n";
  int i = 2;
  while(Q--){
    cout<<i<<" ";
    i+=3;
  }
}
