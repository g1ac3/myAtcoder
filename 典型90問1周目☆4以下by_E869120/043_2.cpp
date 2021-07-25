#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
int H,W;
int INF = INT_MAX;
char S[1009][1009];
int dist[1009][1009][4];
const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
int sx, sy, gx, gy;
struct state{
  int x,y,dir;
};
int main(){
  cin.tie(0);
	ios_base::sync_with_stdio(false);
  cin>>H>>W>>sx>>sy>>gx>>gy;
  sx--;sy--;gx--;gy--;
  for(int i=0;i<H;i++) cin>>S[i];
  for(int i=0;i<H;i++) for(int j=0;j<W;j++) for(int k=0;k<4;k++) dist[i][j][k] = INF;
  deque<state> deq;
  for(int i = 0;i<H;i++){
    dist[sx][sy][i] = 0;
    deq.push_back({sx,sy,i});
  }
  while(!deq.empty()){
    state u = deq.front(); deq.pop_front();
    for(int i=0;i<4;i++){
      int tx = u.x + dx[i], ty = u.y + dy[i], cost = dist[u.x][u.y][u.dir] + (u.dir != i ? 1 : 0);
      if(0<=tx&&tx<H&&0<=ty&&ty<W&&S[tx][ty]=='.'&& dist[tx][ty][i] > cost){
        dist[tx][ty][i] = cost;
        if(u.dir != i) deq.push_back({tx,ty,i});
        else deq.push_front({tx,ty,i});
      }
    }
  }
  int ans = INF;
	for (int i = 0; i < 4; ++i) {
		ans = min(ans,dist[gx][gy][i]);
	}
	cout<<ans<<"\n";
	return 0;
}
