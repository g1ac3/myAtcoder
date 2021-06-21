#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  ll A,B,K;
  cin>>A>>B>>K;
  K--;
  ll N = 1;
  ll s=max(A,B),f=min(A,B);
  vector<int> y(31);
  for(int j=2;j<=f;j++){
    int J = j;
    for(int i=2;i<=j;i++){
      while(J%i==0){
        y[i]++;
        J/=i;
      }
    }
  }
  for(ll i=s+1;i<=A+B;i++){
    N *= i;
    for(int i=2;i<30;i++){
      if(N%i==0&&y[i]>0){
        N/=i;
        y[i]--;
      }
    }
    //cout<<N<<" ";
  }
  //cout<<N;
  ll r=N,l=0;
  ll C;
  while(A>0&&B>0&&(A+B)>2){
    if(l > 59132290782430712){
      C = A*((r-l)/(A+B))+l;
    }else C = (A*(r-l)/(A+B))+l;
    //printf("\n%lld\n%lld\n%lld  %lld %lld\n",l,r,C,A,B);
    if(C>K){
      cout<<"a";
      r = C;
      A--;
    }else{
      cout<<"b";
      l = C;
      B--;
    }
  }
  if(A==1&&B==1){
    if(l+1==K) cout<<"ab";
    else cout<<"ba";
  }else if(A==0){
    while(B--) cout<<"b";
  }else{
    while(A--) cout<<"a";
  }
}
