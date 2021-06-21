#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
vector<vector<ll>> A;
vector<ll> B;
ll N,K;
vector<vector<ll>> dp(800,vector<ll>(800,-1));
bool calc(ll c,int a,int b){
  for(int i=0;i<K;i++){
    for(int j=0;j<K;j++){
      if(a-i+1<0||b-j+1<0||a-i+1+K>=N||b-j+1+K>=N) continue;
      printf("  %d %d\n",a-i+1,b-j+1);
      if(dp[a-i+1][b-j+1]==-1){
        vector<ll> tmp;
        for(int k=0;k<K;k++){
          for(int l=0;l<K;l++){
            tmp.emplace_back(A[k+a-i+1][l+b-j+1]);
          }
        }
        sort(tmp.begin(),tmp.end());
        dp[a-i+1][b-j+1] = tmp[(K*K+1)/2-1];
      }
      if(dp[a-i+1][b-j+1]==c) return true;
    }
  }
  return false;
}
bool calc_1(ll c){
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(A[i][j] == c&&calc(c,i,j)) return true;
    }
  }
  return false;
}
int main(){
  cin>>N>>K;
  A.resize(N);
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      ll tmp;
      cin>>tmp;
      A[i].emplace_back(tmp);
      B.emplace_back(tmp);
    }
  }
  sort(B.begin(),B.end());
  reverse(B.begin(),B.end());
  ll l=0,r=N*N;
  while(r-l>2){
    ll c =(l+r)/2;
    printf("%d %d %d %lld\n",l,r,c,B[c]);
    if(calc_1(B[c])) l=c;
    else r = c;
  }
  cout<<B[l];
}
