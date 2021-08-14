#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
/*
vector<int> UF;
int Utop(int a){
  if(UF[a]<0) return a;
  else return UF[a] = Utop(UF[a]);
}
void Umer(int a,int b){
  if(a==b) return;
  if(UF[a]<UF[b]){
    int tmp = UF[b];
    UF[b] = a;
    UF[a] += tmp;
  }else{
    int tmp = UF[a];
    UF[a] = b;
    UF[b] += tmp;
  }
}
*/
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
    int cnt = 0;
    queue<int> q;
    if(cnt == K) ans++;
  }while(next_permutation(A.begin(),A.end()));
}
