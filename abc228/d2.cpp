#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
struct BIT{
  vector<ll> A;
  int n;
  void init(int a){
    n = a+1;
    A.resize(n);
  }
  void add(int a,int x){
    for(int i=a;i<n;i+=(i&-i)) A[i]+=x;
  }
  int sum(int a){
    int sum = 0;
    for(int i=a;i>0;i-=(i&-i)) sum += A[i];
    return sum;
  }
};
int main(){
  int Q;
  cin>>Q;
  ll N = 1LL<<20;
  vector<ll> A(N,-1);
  BIT B;
  B.init(2*N);
  while(Q--){
    ll t,x;
    cin>>t>>x;
    ll X = x%N;
    if(t==1){
      if(B.sum(X+1)-B.sum(X)==0){
        A[X] = x;
        B.add(X+1,1);
        B.add(X+1+N,1);
        continue;
      }
      int l = X+1,r=2*N+2;
      while(r-l>1){
        int c = (l+r)/2;
        //printf("%d %d %d\n",l,r,c);
        //cout<<B.sum(c)<<" "<<B.sum(l)<<endl;
        if(B.sum(c)-B.sum(l)==c-l) l = c;
        else r = c;
      }
      l%=N;
      A[l] = x;
      B.add(l+1,1);
      B.add(l+1+N,1);
    }else{
      cout<<A[X]<<endl;
    }
    //rep(i,10) cout<<A[i]<<" ";
    //cout<<endl;
  }
}
