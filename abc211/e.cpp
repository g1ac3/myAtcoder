#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
vector<int> dx{1,0,0,-1};
vector<int> dy{0,1,-1,0};
int fact(int a){
  int ans = 1;
  for(int i=2;i<=a;i++) ans *= i;
  cout<<ans<<"\n";
  return ans;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,K;
  cin>>N>>K;
  vector<vector<char>> S(N,vector<char>(N));
  vector<int> A;
  rep(i,N)rep(j,N){
    cin>>S[i][j];
    if(S[i][j]=='.'){
      A.emplace_back(i*N+j);
    }
  }
  //for(int x:A)cout<<x<<" ";
  int ans = 0;
  do{
    int cnt = 1;
    queue<int> q;
    q.push(A[0]);
    vector<bool> used(N);
    used[A[0]] = true;
    while(q.size()){
      int n = q.front();q.pop();
      int x = n%N;
      int y = n/N;
      for(int i=0;i<4;i++){
        int ny=dy[i]+y,nx=dx[i]+x;
        if(ny<0||ny>=N||nx<0||ny>=N||S[ny][nx]=='#'||used[ny*N+nx]) continue;
        bool b = false;
        for(int j=0;j<K;j++){
          if(A[j]==ny*N+nx) b = true;
        }
        used[ny*N+nx] = true;
        if(!b) continue;
        cnt++;
        q.push(ny*N+nx);
      }
    }
    if(cnt == K) ans++;
  }while(next_permutation(A.begin(),A.end()));
  ans = ans/(fact(K)*fact(A.size()-K));
  cout<<ans<<"\n";
}
