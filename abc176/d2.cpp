#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const int INF = 1e9;
vector<int> UF;
vector<int> dist;
vector<vector<int>> E;
int Utop(int a){
  if(UF[a]<0) return a;
  else return Utop(UF[a]);
}
void Uswap(int ah,int bh){
  if(ah==bh) return;
  if(UF[ah]<UF[bh]){
    int tmp = UF[bh];
    UF[bh] = ah;
    UF[ah] += tmp;
  }else{
    int tmp = UF[bh];
    UF[ah] = bh;
    UF[bh] += tmp;
  }
}
void dfs(int n,int t){
  dist[n] = t;
  for(int x:E[n]){
    if(dist[x])
  }
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int H,W,ch,cw,dh,dw;
  cin>>H>>W>>ch>>cw>>dh>>dw;
  ch--;cw--;dh--;dw--;
  UF.resize(H*W,-1);
  vector<vector<char>> A(H,vector<char>(W));
  rep(i,H) rep(j,W) cin>>A[i][j];
  rep(i,H){
    rep(j,W){
      if(A[i][j] == '#')continue;
      if(i+1<H&&A[i+1][j] == '.') Uswap(Utop(i*W+j),Utop((i+1)*W+j));
      if(j+1<W&&A[i][j+1] == '.') Uswap(Utop(i*W+j),Utop(i*W+j+1));
    }
  }
  /*
  rep(i,H*W) cout<<UF[i]<<" ";
  cout<<"\n";
  */
  if(Utop(ch*W+cw)==Utop(dh*W+dw)){
    cout<<0<<"\n";
    return 0;
  }
  E.resize(H*W);
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if(A[i][j]=='#')continue;
      for(int k=-2;k<3;k++){
        for(int l=-2;l<3;l++){
          if(i+k<0||i+k>=H||j+l<0||j+l>=W) continue;
          if(A[i+k][j+l]=='#') continue;
          int ah = Utop(i*W+j);
          int bh = Utop((i+k)*W+j+l);
          if(ah!=bh){
            //cout<<i<<" "<<j<<"\n";
            E[ah].emplace_back(bh);
          }
        }
      }
    }
  }
  /*
  cout<<"------\n";
  rep(i,H*W){
    for(int x:E[i]) cout<<x<<" ";
    cout<<"\n";
  }
  */
  dist.resize(H*W,INF);
  dist[Utop(ch*W+cw)]=0;
  dfs(Utop(ch*W+cw),0);
  /*
  rep(i,H*W) cout<<dist[i]<<" ";
  cout<<"\n";
  */
  int ans = dist[Utop(dh*W+dw)];
  if(ans == INF) cout<<"-1\n";
  else cout<<ans<<"\n";
  return 0;
}
//RE 1:30:45 stack overflow because of bfs
