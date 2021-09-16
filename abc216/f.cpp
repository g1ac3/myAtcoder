#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll MOD = 998244353;
int N;
vector<int> A,B,C;
ll mypow(ll b,ll a){
  ll ans = 1;
  for(ll j=0;j<64;j++){
    if(a>>j&1) ans = (ans*b)%MOD;
    b = (b*b)%MOD;
  }
  return ans;
}
int main(){
  cin>>N;
  A.resize(N);
  B.resize(N);
  C.resize(N+1);
  rep(i,N) cin>>A[i];
  rep(i,N) cin>>B[i];
  sort(A.begin(),A.end());
  sort(B.begin(),B.end());
  rep(i,N) C[i+1] = C[i]+B[i];
  cout<<"      ";
  for(int x:A) printf("%6d",x);
  cout<<"\n      ";
  for(int x:B) printf("%6d",x);
  cout<<"\n";
  for(int x:C) printf("%6d",x);
  cout<<"\n";
  ll ans = 0;
  rep(i,N){
    if(A[i]>=C[i+1]) ans = (ans+mypow(2,i))%MOD;
    else{
      
    }
  }
}
