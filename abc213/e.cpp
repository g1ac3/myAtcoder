#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const int INF = 1e9;
vector<int> dy{-1,0,1,0};
vector<int> dx{0,1,0,-1};
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int H,W;
  cin>>H>>W;
  vector<string> S(H);
  rep(i,H) cin>>S[i];

  vector<vector<int>> dist(H,vector<int>(W,INF));
  priority_queue<P,vector<P>,greater<P>> q;
  q.push({0,0});
  dist[0][0]=0;

  while(q.size()){
    auto [p,n]=q.top();q.pop();
    int y = n/W;
    int x = n%W;
    //printf("%d %d\n",y,x);
    if(dist[y][x]<p) continue;
    for(int i=0;i<4;i++){
      int ny=dy[i]+y,nx=dx[i]+x;
      if(ny<0||ny>=H||nx<0||nx>=W) continue;
      if(S[ny][nx]=='#'){
        for(int k=-1;k<2;k++)for(int l=-1;l<2;l++){
          int nny=ny+k,nnx=nx+l;
          if(nny<0||nny>=H||nnx<0||nnx>=W) continue;
          if(dist[nny][nnx]<=p+1) continue;
          dist[nny][nnx]=p+1;
          q.push({p+1,nny*W+nnx});
        }
      }else{
        if(dist[ny][nx]<=p) continue;
        dist[ny][nx]=p;
        q.push({p,ny*W+nx});
      }
    }
  }
  /*
  rep(i,H){
    rep(j,W){
      if(dist[i][j]!=INF)cout<<dist[i][j]<<" ";
      else cout<<-1<<" ";
    }
    cout<<"\n";
  }
  */
  cout<<dist[H-1][W-1];
}


/*
6 6
.#####
.##...
.####.
..###.
#####.
#####.


*/
