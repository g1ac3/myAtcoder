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
  //vector<int> A(1001);
  int sum = 1;
  for(int i=2;i<N;++i){
    int n = i;
    map<int,int> m;
    for(int j = 2;j*j<=i;j++){
      while(n%j==0){
        n/=j;
        if(m.find(j)!=m.end()) m[j]++;
        else m[j] = 1;
        //A[j]++;
      }
    }
    ll tmp = 1;
    /*
    for(int j=2;j*j<=i;j++){
      tmp *= A[j]+1;
      A[j] = 0;
    }
    */
    for(auto [a,b]:m) tmp *= b+1;
    if(n!=1) tmp*=2;
    sum += tmp;
  }
  cout<<sum;
}
