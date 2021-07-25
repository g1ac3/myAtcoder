#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<ll> A(N);
  rep(i,N) cin>>A[i];
  sort(A.begin(),A.end());
  int sum=0;
  for(int i=0;i<N-2;i++){
    for(int j=i+1;j<N-1;j++){
      if(A[i]==A[j]) continue;
      for(int k=j+1;k<N;k++){
        if(A[j]==A[k]) continue;
        if(A[k]<A[i]+A[j]) sum++;
      }
    }
  }
  cout<<sum<<"\n";
}//6:36
