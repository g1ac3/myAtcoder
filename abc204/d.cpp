#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
vector<ll> T;
int main(){
  ll N;
  cin>>N;
  T.resize(N);
  rep(i,N) cin>>T[i];
  sort(T.begin(),T.end());
  reverse(T.begin(),T.end());
  //for(ll x:T) cout<<x<<" ";
  //cout<<"\n";
  ll a=0,b=0;
  vector<ll> A,B;
  rep(i,N){
    //printf("%lld %lld\n",a,b);
    if(a<b){
      a+=T[i];
      A.emplace_back(T[i]);
    }else{
      b+=T[i];
      B.emplace_back(T[i]);
    }
  }
  if(abs(a-b)<2){
    cout<<max(a,b);
    return 0;
  }
  //printf("%lld %lld\n",a,b);
  if(a<b){
    swap(a,b);
    A.swap(B);
  }
  /*
  printf("%lld %lld\n",a,b);
  for(int x:A)cout<<x<<" ";
  cout<<"\n";
  */
  for(int k=a-b;k/2>0;k--){
    if(a==b) break;
    rep(i,(int)A.size()){
      rep(j,(int)B.size()){
        if(A[i]-B[j]==k/2){
          //printf("%lld %lld\n",A[i],B[j]);
          a -= (A[i]-B[j]);
          b += (A[i]-B[j]);
          swap(A[i],B[j]);
        }
      }
    }
  }
  /*
  for(int x:A)cout<<x<<" ";
  cout<<"\n";
  */
  cout<<max(a,b);
}
/*
6
3 3 4 4 8 10
*/
