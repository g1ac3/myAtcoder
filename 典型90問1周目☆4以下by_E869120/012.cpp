#include <bits/stdc++.h>

using namespace std;
using ll=int64_t;
int H,W;
vector<vector<bool>> A;
vector<pair<int,int>> d={{1,0},{0,1},{-1,0},{0,-1}};
bool solve(int ra,int ca,int rb,int cb){
  int y = ra,x = ca;

}
int main(){
  int Q,t;
  cin>>H>>W>>Q;
  A.resize(H);
  for(int i=0;i<H;i++) A.resize(W);
  int r,c,rb,cb;
  while(Q--){
    cin>>t;
    if(t==1){
      cin>>r>>c;
      A[r][c] = true;
    }else{
      cin>>r>>c>>rb>>cb;
      if(A[r][c]==true&&A[rb][cb]==true&&solve(r,c,rb,cb)) cout<<"Yes\n";
      else cout<<"No\n";
    }
  }
}
