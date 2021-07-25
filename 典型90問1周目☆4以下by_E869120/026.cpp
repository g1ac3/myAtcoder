#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int N;
vector<vector<int>> to;
vector<int> A,B;
void solve(int now,bool t,int p){
  if(t) A.emplace_back(now+1);
  else  B.emplace_back(now+1);
  for(int x:to[now]){
    if(x!=p) solve(x,!t,now);
  }
}
int main(){
  cin>>N;
  to.resize(N);
  for(int i=0;i<N-1;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    to[a].emplace_back(b);
    to[b].emplace_back(a);
  }
  solve(0,true,-1);
  if(A.size()>=N/2) for(int i=0;i<N/2;i++) cout<<A[i]<<" ";
  else for(int i=0;i<N/2;i++) cout<<B[i]<<" ";
}
