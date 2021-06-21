#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  int N;
  cin>>N;
  vector<ll> A(201);
  for(int i=0;i<N;i++){
    ll tmp;
    cin>>tmp;
    A[tmp%200]++;
  }
  ll cnt = 0;
  for(int i=0;i<200;i++){
    cnt+=(A[i]*(A[i]-1))/2;
  }
  cout<<cnt;
}
