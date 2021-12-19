#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  int N;
  cin>>N;
  vector<int> A(N);
  rep(i,N) cin>>A[i];
  rep(i,N) printf("%3d",i);
  cout<<"\n";
  rep(i,N) printf("%3d",A[i]);
  cout<<"\n\n";
  rep(i,N) printf("%3d",A[i]+i);
  cout<<"\n";
  rep(i,N) printf("%3d",i-A[i]);
  cout<<"\n\n";
  for(int i=0;i<N-1;i++){
    for(int j=i+1;j<N;j++){
      if(j-i==A[i]+A[j]) printf("%d %d\n",i,j);
    }
  }
}
