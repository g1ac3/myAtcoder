#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<int> A(N);
  rep(i,N) cin>>A[i];
  int B = 0;
  for(int i=1;i<N;i++) B ^= A[i];
  for(int i=0;i<N;i++){
    cout<<B<<" ";
    B^=A[i];
    if(i!=N-1)B^=A[i+1];
  }
}
//AC 1:10:00