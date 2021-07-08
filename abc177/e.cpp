#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P = pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  const int M = 1000001;
  vector<int> A(M);
  rep(i,N){
    int a;
    cin>>a;
    for(int j=2;j*j<=a;j++){
      if(a%j!=0) continue;
      A[j]++;
      while(a%j==0) a/=j;
    }
    if(a!=1) A[a]++;
  }
  int cnt = 0;
  bool b = true;
  /*
  rep(i,M) cout<<A[i]<<" ";
  cout<<"\n";
  */
  rep(i,M){
    if(A[i] <= 1) continue;
    b = false;
    if(A[i] == N) cnt++;
  }
  if(b) cout<<"pairwise coprime";
  else if(cnt==0) cout<<"setwise coprime";
  else cout<<"not coprime";
}
