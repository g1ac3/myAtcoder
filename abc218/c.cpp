#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int N;
vector<string> S,T;
P find_lu(){
  P a;
  a.first = N;
  a.second = N;
  rep(i,N)rep(j,N){
    if(S[i][j]=='#'){
      a.first = min(a.first,i);
      a.second = min(a.second,j);
    }
  }
  return a;
}
P find_rd(){
  P a;
  a.first = -1;
  a.second = -1;
  for(int i=N-1;i>=0;i--)for(int j=N-1;j>=0;j--){
    if(S[i][j]=='#'){
      a.first = max(a.first,i);
      a.second = max(a.second,j);
    }
  }
    return a;
}
int main(){
  cin>>N;
  S.resize(N);
  T.resize(N);
  rep(i,N) cin>>S[i];
  rep(i,N) cin>>T[i];
  int cnt = 0;
  rep(i,N)rep(j,N) cnt+=(S[i][j]=='#');
  rep(i,N)rep(j,N) cnt-=(T[i][j]=='#');
  if(cnt!=0){
    cout<<"No\n";
    return 0;
  }
  rep(i,4){
    P lu = find_lu();
    P rd = find_rd();
    //rep(a,N) cout<<S[a]<<"\n";
    //printf("%d %d %d %d\n",lu.first,lu.second,rd.first,rd.second);
    for(int y=0;y+(rd.first-lu.first)<N;y++){
      for(int x=0;x+(rd.second-lu.second)<N;x++){
        //printf("  --  %d %d\n",y,x);
        bool c = true;
        for(int a=0;lu.first+a<=rd.first;a++){
          for(int b=0;lu.second+b<=rd.second;b++){
            //printf("    --  %d %d   %d %d  %d %d  %c %c\n",a,b,lu.first+a,lu.second+b,y+a,x+b,S[lu.first+a][lu.second+b],T[y+a][x+b]);
            if(S[lu.first+a][lu.second+b]!=T[y+a][x+b]) c = false;
          }
        }
        if(c){
          cout<<"Yes\n";
          return 0;
        }
      }
    }
    vector<string> tmp(N);
    rep(a,N){
      tmp[a].resize(N);
      rep(b,N) tmp[a][b] = S[b][N-a-1];
    }
    swap(S,tmp);
  }
  cout<<"No\n";
}

/*
5
...##
.....
.....
.....
.....
.....
.....
.....
...#.
...#.
*/
