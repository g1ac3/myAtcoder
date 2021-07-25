#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;
int N;
vector<vector<int>> p;
vector<int> dis;
int calc(int now,int from,int d){
  int MAX = 0;
  dis[now] = d;
  for(int to : p[now]){
    if(to == from) continue;
    MAX = max(MAX,calc(to,now,d+1));
  }
  return MAX + 1;
}
int main(){
  cin>>N;
  p.resize(N);
  dis.resize(N);
  for(int i=0;i<N-1;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    p[a].emplace_back(b);
    p[b].emplace_back(a);
  }
  calc(0,-1,0);
  int MAX = 0;
  int ii = 0;
  for(int i=0;i<N;i++){
    if(dis[i] > MAX){
      MAX = dis[i];
      ii = i;
    }
  }
  cout<<calc(ii,-1,0);
}
