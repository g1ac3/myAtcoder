#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ll N;
  cin>>N;
  int cnt = N/2;
  vector<ll> A(N),B(N/2),C(N/2);
  vector<bool> T(N/2);
  unordered_set<int> s;
  rep(i,N) cin>>A[i];
  rep(i,N/2){
    B[i] = A[i];
    C[i] = A[N-1-i];
    if(B[i]==C[i]){
      T[i] = true;
    }else{
      s.insert(B[i]);
      s.insert(C[i]);
    }
  }
  int size = s.size();
  int sum = 0;
  for(int i=0;i<N/2;i++){
    if(size==cnt*2) break;
    //printf("%d %d %d\n",i,size,cnt);
    cnt--;
    if(T[i]) continue;
    sum++;
    size--;
    for(int j=i+1;j<N/2;j++){
      if(B[j] == B[i]) B[j]=C[i];
      if(C[j] == B[i]) C[j]=C[i];
      if(B[j] == C[j]){
        T[j]=true;
      }
    }
  }
  /*
  for(ll x:B)cout<<x<<" ";
  cout<<"\n";
  for(ll x:C)cout<<x<<" ";
  cout<<"\n";
  */
  cout<<sum+cnt;
}
