#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  vector<vector<ll>> C(61,vector<ll>(61));
  ll A,B,K;
  cin>>A>>B>>K;
  C[0][0] = 1;
  for(int i=1;i<61;i++){
    for(int j=0;j<i+1;j++){
      if(j==0) C[i][j] = C[i-1][j];
      else if(j==i) C[i][j] = C[i-1][j-1];
      else C[i][j] = C[i-1][j-1] + C[i-1][j];
    }
  }
  while(A+B>0){
    //printf("%lld %lld %lld %lld\n",A,B,C[A+B-1][A-1],K);
    ll x = 0;
    if(A>=1) x = C[A+B-1][A-1];
    if(x>=K){
      cout<<"a";
      A--;
    }
    else{
      cout<<"b";
      K -= x;
      B--;
    }
    //cout<<"\n";
  }
}
