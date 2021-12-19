#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main(){
  string S;
  int N;
  cin>>S>>N;
  vector<string> A(N);
  map<char,char> M,M2;
  for(int i=0;i<(int)S.size();i++){
    M[S[i]] = i+'a';
    M2[i+'a'] = S[i];
  }
  rep(i,N) cin>>A[i];
  rep(i,N)rep(j,(int)A[i].size()) A[i][j] = M[A[i][j]];
  sort(A.begin(),A.end());
  rep(i,N){
    rep(j,(int)A[i].size()){
      A[i][j] = M2[A[i][j]];
      //cout<<(int)A[i][j]-'a'<<" ";
    }
    cout<<A[i]<<endl;
  }
}
