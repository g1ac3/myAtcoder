#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N,C;
  cin>>N>>C;
  vector<pair<ll,ll>> A,B;
  rep(i,N){
    ll a,b,c;
    cin>>a>>b>>c;
    A.emplace_back(make_pair(a,c));
    B.emplace_back(make_pair(b,-c));
  }
  sort(A.begin(),A.end());
  sort(B.begin(),B.end());
  A.emplace_back(make_pair(INT_MAX,0));
  B.emplace_back(make_pair(INT_MAX,0));//kore nai to RE 
  int i=0,j=0,d=0;
  ll sum = 0;
  ll ans = 0;
  while(i<N||j<N){

    if(A[i].first<=B[j].first){
      ans += min(C,sum)*(A[i].first-d);
      d=A[i].first;
      sum += A[i].second;
      i++;
    }else{
      ans += min(C,sum)*(B[j].first-d+1);
      d=B[j].first+1;
      sum += B[j].second;
      j++;
    }
  }
  cout<<ans;
}
//AC
