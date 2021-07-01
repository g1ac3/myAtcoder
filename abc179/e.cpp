#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ll N,X,M;
  cin>>N>>X>>M;
  vector<ll> memo(M,-1);
  vector<ll> sum;
  ll i=0,j=0;
  sum.emplace_back(X);
  memo[X] = i++;
  while(i<N){
    X = (X*X)%M;
    //printf("%lld %lld\n",X,i);
    if(memo[X]!=-1){
      //  cout<<memo[X]<<"\n";
      ll t = i-memo[X];
      //cout<<t<<"   adwad\n";
      //cout<<sum[i-1]+(N/t)*(sum[i-1]-sum[memo[X]-1])<<"\n";
      //cout<<N-(N%t);
      ll n = N-memo[X];
      if(memo[X]!=0) sum.emplace_back(sum[i-1]+((n/t)-1)*(sum[i-1]-sum[memo[X]-1]));
      else sum.emplace_back(sum[i-1]+((n/t)-1)*(sum[i-1]));
      //cout<<"ar";
      j = n%t;
      //cout<<"ar";
      break;
    }else{
      memo[X] = i;
      sum.emplace_back(sum[i-1]+X);
      i++;
    }
  }
  ll ans = sum[sum.size()-1];
  while(j--){
    //printf("%lld %lld\n",j,X);
    cout<<X<<" ";
    ans += X;
    X = (X*X)%M;
  }
  /*
  for(ll x:sum)cout<<x<<" ";
  cout<<"\n";
  */
  cout<<ans;
}
//AC
