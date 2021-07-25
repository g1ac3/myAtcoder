#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll P;
  cin>>P;
  vector<ll> A(10,1);
  for(int i=1;i<=10;i++){
    A[i] = A[i-1]*(i+1);
  }
  int i=9;
  ll cnt = 0;
  while(P>0){
    //cout<<i<<"\n";
    if(P<A[i]){
      i--;
      continue;
    }
    cnt += P/A[i];
    P%=A[i];
  }
  cout<<cnt;
}
//AC
