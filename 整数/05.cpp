#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
ll MOD = 1000000007;
int main(){
  int N;
  cin>>N;
  vector<int> ans(N);
  ans[0] = 0;
  for(int j=2;j<=N;j++){
    int J = j;
    for(int i=2;i<=j;i++){
      while(J%i==0){
        ans[i-1]++;
        J/=i;
      }
    }
  }
  ll sum = 1;
  //for(int i=0;i<N;i++)cout<<ans[i]<<" ";
  for(int x:ans) sum = (sum*(x+1))%MOD;
  cout<<sum;
}
