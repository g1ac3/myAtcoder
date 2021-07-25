#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N;
  cin>>N;
  int N2 = sqrt(N);
  ll sum = 0;
  for(int i=2;i<=N2;i++){
    while(N%i==0){
      sum++;
      N/=i;
    }
  }
  if(N!=1) sum++;
  //cout<<sum<<"\n";
  int cnt = 0;
  while(sum>1){
    //printf("%d %d\n",sum,cnt);
    cnt++;
    sum = (sum+1)/2;
  }
  cout<<cnt;
}
/*
for(int i=2;i+i<=N;i++){
  while(n%i==0){
    ans.emplace_back(i);
    n/=i;
  }
}
if(n!=1) ans.emplace_back(n);
*/
