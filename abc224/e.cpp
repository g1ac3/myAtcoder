#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int H,W,N;
  cin>>H>>W>>N;
  vector<vector<int>> E(N),Y(H),X(W);
  vector<int> A(N);
  vector<P> Z(N);
  int MAX = -1;
  int iMX = -1;
  rep(i,N){
    int a,b;
    cin>>a>>b>>A[i];
    if(MAX<A[i]){
      MAX = A[i];
      iMX = i;
    }
    --a;--b;
    Z[i] = {a,b};
    Y[a].emplace_back(i);
    X[b].emplace_back(i);
  }

  vector<int> ans(N);
  priority_queue<P> q;
  q.push({MAX,iMX});
  ans[iMX] = 0;
  while(q.size()){
    auto [num,i] = q.top();q.pop();
    //cout<<num<<endl;
    auto [y,x] = Z[i];
    for(int to:Y[y]){
      if(i==to) continue;
      if(A[to]>num) ans[i] = max(ans[i],ans[to]+1);
      else if(A[to]<num) q.push({A[to],to});
    }
    for(int to:X[x]){
      if(i==to) continue;
      if(A[to]>num) ans[i] = max(ans[i],ans[to]+1);
      else if(A[to]<num) q.push({A[to],to});
    }
  }
  //cout<<"--\n";
  for(int x:ans) cout<<x<<endl;
}
