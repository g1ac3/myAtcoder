#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(ll i=0;i<(n);++i)
ll N = 9;
ll K = 8;
ll num = -1;
map<ll,ll> MAP;
priority_queue<P,vector<P>,greater<P>> q;
vector<vector<bool>> E(N,vector<bool>(N));
ll VtoI(vector<ll> P){
  ll ans = 0;
  ll tmp = 1;
  for(ll i=N-1;i>=0;i--){
    ans += tmp*P[i];
    tmp*=10;
  }
  return ans;
}
vector<ll> ItoV(ll v){
  vector<ll> ans;
  while(v>0){
    ans.emplace_back(v%10);
    v/=10;
  }
  reverse(ans.begin(),ans.end());
  return ans;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll M;
  cin>>M;
  rep(i,M){
    int a,b;
    cin>>a>>b;
    --a;--b;
    E[a][b]=true;
    E[b][a]=true;
  }
  vector<ll> P(N);
  vector<bool> check(10);
  check[0]=true;
  rep(i,K){
    cin>>P[i];
    check[P[i]]=true;
  }
  for(int i=1;i<=N;i++){
    if(!check[i]){
      num = i;
      P[8]=num;
    }
  }
  q.push({0,VtoI(P)});
  while(q.size()){
    auto [cnt,v] = q.top();q.pop();
    vector<ll> A = ItoV(v);
    //cout<<v<<endl;
    if(MAP.count(v)==0){
      MAP[v] = cnt;
    }else{
      if(cnt<MAP[v]) MAP[v] = cnt;
      else continue;
    }
    for(int i=0;i<N;i++){
      if(A[i]==num){
        for(int j=0;j<N;j++){
          if(E[i][j]){
            swap(A[i],A[j]);
            q.push({cnt+1,VtoI(A)});
            swap(A[i],A[j]);
          }
        }
      }
    }
  }
  if(MAP.count(123456789)) cout<<MAP[123456789]<<endl;
  else cout<<"-1\n";
}
//362880
