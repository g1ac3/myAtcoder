#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
const vector<P> dr{{1,0},{0,1},{-1,0},{0,-1}};
const int INF = 1001001001;
int main(){
  int H,W,Sh,Sw,Gh,Gw;
  cin>>H>>W>>Sh>>Sw>>Gh>>Gw;
  --Sh;--Sw;--Gh;--Gw;
  vector<vector<char>> A(H,vector<char>(W));
  rep(i,H)rep(j,W)cin>>A[i][j];

  deque<P> q;
  vector<vector<int>> dist(H,vector<int>(W,INF));
  q.emplace_back(Sh,Sw);
  dist[Sh][Sw] = 0;
  while(!q.empty()){
    auto [y,x] = q.front();q.pop_front();
    // printf("%d %d\n",y,x);
    for(auto [dy,dx]:dr){
      int ny = y+dy,nx=x+dx;
      if(ny<0||ny>=H||nx<0||nx>=W) continue;
      if(A[ny][nx]=='.'&&dist[ny][nx]>dist[y][x]){
        dist[ny][nx] = dist[y][x];
        q.emplace_front(ny,nx);
      }
    }
    for(int dy=-2;dy<3;dy++){
      for(int dx=-2;dx<3;dx++){
        int ny = y+dy,nx=x+dx;
        if(ny<0||ny>=H||nx<0||nx>=W) continue;
        if(A[ny][nx]=='.'&&dist[ny][nx]>dist[y][x]+1){
          dist[ny][nx] = dist[y][x]+1;
          q.emplace_back(ny,nx);
        }
      }
    }
  }
  /*
  rep(i,H){
    rep(j,W) cout<<dist[i][j]<<" ";
    cout<<"\n";
  }
  */
  if(dist[Gh][Gw]==INF) cout<<"-1\n";
  else cout<<dist[Gh][Gw]<<"\n";
}