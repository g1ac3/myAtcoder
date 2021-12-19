#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  vector<P> A(2*N);
  rep(i,2*N) A[i].second = i;
  vector<vector<int>> B(2*N,vector<int>(M));
  rep(i,2*N){
    rep(j,M){
      char tmp;
      cin>>tmp;
      if(tmp=='G') B[i][j]=0;
      if(tmp=='C') B[i][j]=1;
      if(tmp=='P') B[i][j]=2;
    }
  }
  rep(i,M){
    //rep(i,2*N) cout<<A[i].second+1<<" "<<A[i].first<<endl;
    //cout<<"------\n";
    rep(j,N){
      int a = 2*j;
      //int b = B[i][A[a].second];
      //int c = B[i][A[a+1].second];
      int b = B[A[a].second][i];
      int c = B[A[a+1].second][i];
      if(b==c) continue;
      if(b==0){
        if(c==1) A[a].first--;
        else A[a+1].first--;
      }else if(b==1){
        if(c==2) A[a].first--;
        else A[a+1].first--;
      }else if(b==2){
        if(c==0) A[a].first--;
        else A[a+1].first--;
      }
    }
    sort(A.rbegin(),A.rend());
  }
  //rep(i,2*N) cout<<A[i].second+1<<" "<<A[i].first<<endl;
  //cout<<"------\n";
  reverse(A.begin(),A.end());
  rep(i,2*N) cout<<A[i].second+1<<endl;
}
