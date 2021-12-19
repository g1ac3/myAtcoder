#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  vector<vector<int>> E(N);
  vector<int> A(N),ans;
  rep(i,M){
    int a,b;
    cin>>a>>b;
    --a;--b;
    E[a].emplace_back(b);
    A[b]++;
  }
  priority_queue<int,vector<int>,greater<int>> q;
  rep(i,N) if(A[i]==0) q.push(i);
  while(q.size()){
    int a = q.top();q.pop();
    ans.emplace_back(a);
    for(int to:E[a]){
      A[to]--;
      if(A[to]==0) q.push(to);
    }
  }
  if(ans.size()==N){
    for(int x:ans) cout<<x+1<<" ";
    cout<<"\n";
  }else{
    cout<<"-1\n";
  }
}
