#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  int K;
  string S,T;
  cin>>K>>S>>T;
  vector<int> A(10),B(10),C(10,K);
  for(int i=0;i<4;i++){
    A[(S[i]-'0')]++;C[(S[i]-'0')]--;
    B[(T[i]-'0')]++;C[(T[i]-'0')]--;
  }
  ll game = 0,win = 0;
  for(int i=1;i<10;i++){
    if(C[i]==0) continue;
    C[i]--;
    A[i]++;
    ll tg=0,tw=0;
    for(int j=1;j<10;j++){
      if(C[j]==0)continue;
      B[j]++;
      tg+=C[j];
      ll a=0,b=0;
      for(int k=1;k<10;k++){
        a += (k*pow(10,A[k]));
        b += (k*pow(10,B[k]));
      }
      if(a>b) tw+=C[j];
      B[j]--;
    }
    C[i]++;
    A[i]--;
    game += (C[i]*tg);
    win += (C[i]*tw);
  }
  //printf("%lld %lld %f",win,game,win/(1.0*game));
  printf("%6f",win/(1.0*game));
}
