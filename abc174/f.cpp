#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
  /*
  ios::sync_with_stdio(false);
  cin.tie(0);
  */
  int N,Q;
  cin>>N>>Q;
  vector<int> C(N),B(N+1,-1),ANS(Q);
  vector<tuple<int,int,int>> A;
  rep(i,N) cin>>C[i];
  rep(i,Q){
    int a,b;
    cin>>a>>b;
    A.emplace_back(b-1,a-1,i);
  }
  sort(A.begin(),A.end());
  //rep(i,Q) cout<<get<1>(A[i])<<" "<<get<0>(A[i])<<" "<<get<2>(A[i])<<"\n";
  int l=get<1>(A[0]),r=get<0>(A[0]);
  int cnt = 0;
  for(int i=l;i<=r;i++){
    //printf("%d %d\n",C[i],B[C[i]]);
    if(B[C[i]]<0){
      B[C[i]] = i;
      cnt++;
    }
    B[C[i]] = i;
  }
  //rep(i,N)cout<<B[i]<<" ";
  for(int i=0;i<Q;i++){
    //printf("cnt : %d\n",cnt);
    int nl=get<1>(A[i]),nr=get<0>(A[i]);
    for(int j=r+1;j<=nr;j++){
      //printf("%d %d\n",i,j);
      if(B[C[j]]<0){
        B[C[j]] = j;
        cnt++;
      }
      B[C[j]] = j;
    }
    if(nl<l){
      for(int j=l-1;j>=nl;j--){
        if(B[C[j]]<0){
          B[C[j]] = j;
          cnt++;
        }
        B[C[j]] = j;
      }
    }else if(l<nl){
      for(int j=l;j<nl;j++){
        if(B[C[j]]==j){
          B[C[j]] = -1;
          cnt--;
        }
      }
    }
    l = nl;
    r = nr;
    ANS[get<2>(A[i])] = cnt;
  }
  for(int x:ANS) cout<<x<<"\n";
}//TLE
