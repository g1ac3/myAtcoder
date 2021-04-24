#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  int N;
  cin>>N;
  vector<int> C(N);
  for(int i=0;i<N;i++) cin>>C[i];
  vector<vector<int>> path(N);
  for(int i=0;i<N;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    path[a].emplace_back(b);
    path[b].emplace_back(a);
  }
  queue<int> q;
  unordered_set<int> fc;
  unordered_set<int> fp;
  q.push(0);
  fc.insert(C[0]);
  while(!q.empty()){
    int now = q.front();
    if(fp.count(now) == 0){
      fp.insert(now);
      
    }

    q.pop();
  }
}
