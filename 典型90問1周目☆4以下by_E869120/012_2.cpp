#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
struct UF{
  vector<int> p;
  void merge(int a,int b){
    p[root(b)] = p[root(a)];
  }
  int root(int x){
    if(p[x] == x) return x;
    else return p[x] = root(p[x]);
  }
  bool issame(int a,int b){
    return root(a)==root(b);
  }
};
int main(){
  int H,W,Q;
  UF uf;
  cin>>H>>W>>Q;
  vector<pair<int,int>> d ={{1,0},{0,1},{-1,0},{0,-1}};
  vector<vector<bool>> used(H,vector<bool>(W));
  uf.p.resize(H*W);
  int r,c,r2,c2,t;
  while(Q--){
    cin>>t;
    if(t==1){
      cin>>r>>c;
      r--;c--;
      used[r][c] = true;
      uf.p[r*W+c] = r*W+c;
      for(auto [a,b]:d){
        if(0<=r+a&&r+a<H&&0<=c+b&&c+b<W){
          if(used[r+a][c+b]) uf.merge(r*W+c,(r+a)*W+(c+b));
        }
      }
    }else{
      cin>>r>>c>>r2>>c2;
      r--;c--,r2--,c2--;
      if(used[r][c]&&used[r2][c2]&&uf.issame(r*W+c,r2*W+c2)) cout<<"Yes\n";
      else cout<<"No\n";
    }
  }

}
