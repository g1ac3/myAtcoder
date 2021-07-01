#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<int> A(N+1),B(N+1);
  rep(i,N){
    int a;
    cin>>a;
    A[a]++;
  }
  rep(i,N){
    int a;
    cin>>a;
    B[a]++;
  }
  rep(i,N){
    if(N<A[i]+B[i]){
      cout<<"No";
      return 0;
    }
  }
  cout<<"Yes\n";
  int i=0,j=0,sum=N;
  while(sum>0){
    i = i%(N+1);
    j = j%(N+1);
    //printf("%d %d\n",i,j);
    if(A[i]==0){
      i++;
      continue;
    }
    if(B[j]==0||i==j){
      j++;
      continue;
    }
    //printf("   %d\n",sum);
    if(A[i]<B[j]){
      sum -= A[i];
      rep(k,A[i]) cout<<j<<" ";
      B[j] -= A[i];
      A[i]=0;
      i++;
    }else{
      sum -= B[j];
      rep(k,B[j]) cout<<j<<" ";
      A[i] -= B[j];
      B[j]=0;
      j++;
    }
  }
}//TLE
