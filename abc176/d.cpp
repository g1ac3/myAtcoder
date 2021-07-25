#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const int INF = 1e9;
vector<int> UF;
/*
int Utop(int a,int n){
  cout<<UF[a]<<" ";
  if(UF[a]<0) return a;
  else return UF[a] = Utop(UF[a],n+1);
}*/
int Utop(int a){
  if(UF[a]<0) return a;
  else return UF[a] = Utop(UF[a]);
}
void Uswap(int ah,int bh){
  if(ah==bh) return;
  if(UF[ah]<UF[bh]){
    int tmp = UF[bh];
    UF[bh] = ah;
    UF[ah] += tmp;
  }else{
    int tmp = UF[ah];
    UF[ah] = bh;
    UF[bh] += tmp;
  }
}
int main(){

  int H,W,ch,cw,dh,dw;
  cin>>H>>W>>ch>>cw>>dh>>dw;
  ch--;cw--;dh--;dw--;
  UF.resize(H*W,-1);
  vector<vector<char>> A(H,vector<char>(W));
  rep(i,H) rep(j,W) cin>>A[i][j];
  rep(i,H){
    rep(j,W){
    if(A[i][j] == '#')continue;
    //printf("%d %d ",i,j);
    if(i+1<H&&A[i+1][j] == '.') Uswap(Utop(i*W+j),Utop((i+1)*W+j));
    if(j+1<W&&A[i][j+1] == '.') Uswap(Utop(i*W+j),Utop(i*W+j+1));
  }
  }
  //何が起こってるかでばっぐ
  /*
  int a=124,b=369;
  cout<<A[a+1][b]<<" "<<A[a][b+1]<<"\n";
  cout<<Utop(a*W+b,0)<<"\n";
  cout<<Utop(a*W+b+1)<<"\n";

  if(A[a+1][b] == '.') Uswap(Utop(a*W+b),Utop((a+1)*W+b));
  if(A[a][b+1] == '.') Uswap(Utop(a*W+b),Utop(a*W+b+1));
  */
  /*
  rep(i,H)rep(j,W){
    if(A[i][j] == '#')continue;
    if(i+1<H&&A[i+1][j] == '.') Uswap(UF[i*W+j]=Utop(i*W+j),UF[(i+1)*W+j]=Utop((i+1)*W+j));
    if(j+1<W&&A[i][j+1] == '.') Uswap(UF[i*W+j]=Utop(i*W+j),UF[i*W+j+1]=Utop(i*W+j+1));
  }
  rep(i,H*W) cout<<UF[i]<<" ";
  cout<<"\n";
  */
  if(Utop(ch*W+cw)==Utop(dh*W+dw)){
    cout<<0<<"\n";
    return 0;
  }
  vector<vector<int>> E(H*W);
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
  vector<int> dist(H*W,INF);
  priority_queue<P,vector<P>,greater<P>> q;
  q.push({0,Utop(ch*W+cw)});
  dist[Utop(ch*W+cw)]=0;
  while(!q.empty()){
    auto [t,n] = q.top();q.pop();
    if(dist[n]!=t) continue;
    for(int x:E[n]){
      if(dist[x]<=t+1) continue;
      dist[x] = t+1;
      q.push({t+1,x});
    }
  }
  /*
  rep(i,H*W) cout<<dist[i]<<" ";
  cout<<"\n";
  */
  int ans = dist[Utop(dh*W+dw)];
  if(ans == INF) cout<<"-1\n";
  else cout<<ans<<"\n";
  return 0;
}
//AC
