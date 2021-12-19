#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int M = 334;
bool f(int S){
  for(int a=1;a<M;a++){
    for(int b=1;b<M;b++){
      if(S-3*(a+b)==4*a*b)return false;
    }
  }
  return true;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<int> S(N);
  rep(i,N) cin>>S[i];
  int ans = 0;
  rep(i,N){
    if(f(S[i])) ans++;
  }
  cout<<ans<<endl;
}
