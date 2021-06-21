#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int M=200;
int main(){
  int N;
  cin>>N;
  vector<ll> A(N);
  for(int i=0;i<N;i++){
    ll tmp;
    cin>>tmp;
    A[i] = tmp%M;
  }
  vector<vector<ll>> dp(N+1,vector<ll>(M));
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      if(dp[i][j]>0){
        dp[i+1][(j+A[i])%M]++;
        dp[i+1][j]++;
      }
    }
    dp[i+1][A[i]]++;
  }
  for(int i=0;i<=N;i++){
    for(int j=0;j<M;j++){
      printf("%3lld",dp[i][j]);
    }
    cout<<"\n";
  }
  int i_mem;
  for(int i=M-1;i>=0;i--){
    if(dp[N][i]>1) {
      i_mem = i;
      break;
    }
    if(i==0&&dp[N][i]<=1){
      cout<<"No";
      return 0;
    }
  }
  int i=N,j=i_mem,k=i_mem;
  vector<ll> B,C;
  cout<<"---------\n";
  while(i>0){
    printf("%d %d %d\n",i,j,k);
    if(dp[i-1][j]+1 == dp[i][j]){
    }else{
      j = (j-A[i]+M)%M;
      B.emplace_back(i);
    }
    if(dp[i-1][(k-A[i])%M]+1 == dp[i][k]){
      C.emplace_back(i);
      k = (k-A[i]+M)%M;
    }
    i--;
  }
  cout<<"---------\n";
  sort(B.begin(),B.end());
  sort(C.begin(),C.end());
  cout<<B.size()<<" ";
  for(int x:B)cout<<x<<" ";
  cout<<"\n"<<C.size()<<" ";
  for(int x:C)cout<<x<<" ";
}
