#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
const int M = 200001;

vector<int> UF(M,-1);
int UFtop(int a){
  if(UF[a]<0) return a;
  else return UFtop(UF[a]);
}
void UFadd(int a,int b){
  int ah = UFtop(a),bh = UFtop(b);
  if(ah==bh) return;
  if(UF[ah]>UF[bh]){
    int tmp = UF[ah];
    UF[ah] = bh;
    UF[bh] += tmp;
  }else{
    int tmp = UF[bh];
    UF[bh] = ah;
    UF[ah] += tmp;
  }
}
int main(){
  ll N;
  cin>>N;
  vector<int> T(N),A(N/2),B(N/2);
  rep(i,N) cin>>T[i];
  rep(i,N/2){
    A[i] = T[i];
    B[i] = T[N-i-1];
  }
  /*
  for(int x:A) cout<<x<<" ";
  cout<<"\n";
  for(int x:B) cout<<x<<" ";
  cout<<"\n";
  */
  rep(i,N/2){
    /*
    cout<<"\n";
    rep(i,10) cout<<UF[i]<<" ";
    */
    if(A[i]==B[i]) continue;
    UFadd(A[i],B[i]);
  }
  /*
  cout<<"\n";
  rep(i,10) cout<<UF[i]<<" ";
  cout<<"\n";
  */
  int sum = 0;
  rep(i,M){
    if(UF[i]<0) sum -= (UF[i]+1);
  }
  cout<<sum;
}
//TLE
