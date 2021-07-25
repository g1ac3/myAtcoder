#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int M = 10000;
int main(){
  ll N,A,B,C;
  cin>>N>>A>>B>>C;
  ll MIN = 1001001001;
  for(int i=0;i<M;i++){
    for(int j=0;j<M-i;j++){
      /*
      if(N>(A*i+B*j)&&(N-(A*i+B*j))%C==0){
        MIN = min(MIN,(i+j+(N-(A*i+B*j))/C));
      }
      */
      ll V = N - 1ll*i*A - 1ll*j*B;
      ll R = 1ll*i + 1ll*j + V/C;
      if(V%C!=0ll||V<0||R>9999ll) continue;
      MIN = min(MIN,R);
    }
  }
  cout<<MIN;
}
