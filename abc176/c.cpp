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
  vector<int> A(N);
  rep(i,N) cin>>A[i];
  int MAX = A[0];
  ll sum = 0;
  for(int i=1;i<N;i++){
    if(MAX > A[i]){
      sum += MAX-A[i];
    }else{
      MAX = A[i];
    }
  }
  cout<<sum<<"\n";
}
//AC 7:20
