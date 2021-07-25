#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  ll N,K;
  cin>>N>>K;
  vector<int> A(N),B(N);
  for(int i=0;i<N;i++) cin>>A[i];
  for(int i=0;i<N;i++) cin>>B[i];
  ll sum = 0;
  for(int i=0;i<N;i++){
    sum += abs(A[i]-B[i]);
  }
  if(abs(K-sum)%2==0 && sum<=K)cout<<"Yes";
  else cout<<"No";
}
