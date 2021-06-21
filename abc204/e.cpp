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
  ll sum = 0;
  rep(i,(int)T.size())sum += T[i];
  sum = (sum+1)/2;
  ll a=0,b=0;
  vector<ll> A,B;
  rep(i,N){
    if(a<b){
      a+=T[i];
      A.emplace_back(T[i]);
    }else{
      b+=T[i];
      B.emplace_back(T[i]);
    }
  }
  //printf("%lld %lld\n",a,b)
  if(a<b){
    swap(a,b);
    A.swap(B);
  }
  /*
  printf("%lld %lld\n",a,b);
  for(int x:A)cout<<x<<" ";
  cout<<"\n";
  */
  for(int k=a-sum;k>0;k--){
    rep(i,(int)A.size()){
      rep(j,(int)B.size()){
        if(a==sum){
          cout<<a;
          return 0;
        }
        if(a-sum<k) continue;
        if(A[i]-B[j]==k){
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
