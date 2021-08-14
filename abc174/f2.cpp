#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int N,Q;
vector<int> BIT;
void add(int a,int w){
  for(int x = a;x<=N;x+=(x&-x)) BIT[x] += w;
}
int sum(int a){
  int ret = 0;
  for(int x = a;x>0;x-=(x&-x)) ret += BIT[x];
  return ret;
}
int main(){
  cin>>N>>Q;
  BIT.resize(N+1);
  vector<int> C(N+1),B(N+1),ANS(Q);
  vector<tuple<int,int,int>> A;
  rep(i,N) cin>>C[i+1];
  rep(i,Q){
    int a,b;
    cin>>a>>b;
    A.emplace_back(b,a,i);
  }
  sort(A.begin(),A.end());
  int r=0;
  for(int i=0;i<Q;i++){
    int nl=get<1>(A[i]),nr=get<0>(A[i]);
    while(r!=nr){
      r++;
      if(B[C[r]]!=0){
        add(B[C[r]],-1);
      }
      B[C[r]] = r;
      add(r,1);
    }

    ANS[get<2>(A[i])] = sum(r)-sum(nl-1);
    /*
    printf("==========%d %d %d==========\n",r,nl,nr);
    for(int j=1;j<=N;j++) cout<<C[j]<<" ";
    cout<<"\n";
    for(int j=1;j<=N;j++) cout<<B[j]<<" ";
    cout<<"\n";
    for(int j=1;j<=N;j++) cout<<BIT[j]<<" ";
    cout<<"\n";
    */
  }
  for(int x:ANS) cout<<x<<"\n";
}
