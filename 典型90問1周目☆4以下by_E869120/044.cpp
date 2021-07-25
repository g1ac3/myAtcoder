#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
static const ll BIG = INT_MAX/2;
int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  ll N,Q;
  cin>>N>>Q;
  vector<ll> A(N),B(N);
  for(int i=0;i<N;i++) cin>>A[i];
  for(int i=0;i<N;i++) B[i]=i;
  ll t,x,y,i=0;
  while(Q--){
    cin>>t>>x>>y;
    x=(x-i+BIG*N-1)%N;y=(y-i+BIG*N-1)%N;
    if(t==3) cout<<A[x]<<"\n";
    else if(t==1) swap(A[x],A[y]);
    else if(t==2) i++;
    /*
    for(int x:A) cout<<x<<" ";
    cout<<"\n";
    for(int j=0;j<N;j++){
      cout<<A[(j-i+N)%N]<<" ";
    }
    cout<<"\n\n";
    */
  }
}
