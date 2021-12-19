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
  vector<int> A(N),B(N);
  vector<double> C(N);
  rep(i,N) cin>>A[i]>>B[i];
  double sum = 0;
  rep(i,N){
    C[i] = 1.0*A[i]/B[i];
    sum += C[i];
  }
  sum/=2;
  //cout<<sum<<endl;
  double ans=0;
  rep(i,N){
    if(sum-C[i]<0){
      printf("%.10f\n",ans+A[i]*sum/C[i]);
      return 0;
    }
    sum -= C[i];
    ans += A[i];
  }
}
