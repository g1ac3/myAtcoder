#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  vector<vector<int>> A(N);
  vector<bool> used(N);
  rep(i,M){
    int a,b;
    cin>>a>>b;
    a--;b--;
    A[a].emplace_back(b);
    A[b].emplace_back(a);
  }
  int sum = 0;
  queue<int> q;
  q.push(N-1);
  while(!q.empty()){
    int n = q.front();
    if(used[n]){
      q.pop();
      continue;
    }
    used[n] = true;
    int cnt = 0;
    for(int x:A[n]){
      if(n>x) cnt++;
      if(used[x]) continue;
      q.push(x);
    }
    if(cnt==1) sum++;
    q.pop();
  }
  cout<<sum;
}
//AC 7:22
