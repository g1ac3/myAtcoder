#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ll N,P,Q,sum=0;
  cin>>N>>P>>Q;
  vector<ll> A(N);
  vector<ll> B(6,1);
  rep(i,N) cin>>A[i];
  for(int a=0;a<N-4;a++){
    B[1] = B[0]*A[a];
    B[1]%=P;
    for(int b=a+1;b<N-3;b++){
      B[2] = B[1]*A[b];
      B[2]%=P;
      for(int c=b+1;c<N-2;c++){
        B[3] = B[2]*A[c];
        B[3]%=P;
        for(int d=c+1;d<N-1;d++){
          B[4] = B[3]*A[d];
          B[4]%=P;
          for(int e=d+1;e<N;e++){
            B[5] = B[4]*A[e];
            B[5]%=P;
            //printf("%lld\n",B[5]);
            if(B[5]==Q) sum++;
          }
        }
      }
    }
  }
  cout<<sum;
}
