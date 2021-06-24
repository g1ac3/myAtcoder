#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  ll sum = 0;
  rep(i,N){
    ll a,b;
    cin>>a>>b;
    if((b-a)%2){
      sum += (b+a)*((b-a+1)/2);
    }else{
      sum += (b+a)*(b-a+1)/2;
    }
  }
  cout<<sum;
}
//AC
