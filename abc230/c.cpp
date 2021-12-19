#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
bool calc(ll i,ll j,ll a,ll b,ll n){
  ll tmp1 = max(1-a,1-b);
  ll tmp2 = min(n-a,n-b);
  //printf("%lld %lld %lld %lld  %lld %lld\n",i,j,tmp1,tmp2,i-a,j-b);
  //printf("%d %d\n",tmp1 <= i-a && i-a <= tmp2,tmp1 <= j-b && j-b <= tmp2);
  if((i-a==j-b)&&(tmp1 <= i-a && i-a <= tmp2)&&(tmp1 <= j-b && j-b <= tmp2)) return true;
  tmp1 = max(1-a,b-n);
  tmp2 = min(n-a,b-1);
  // printf("%lld %lld %lld %lld  %lld %lld\n",i,j,tmp1,tmp2,i-a,b-j);
  // printf("%d %d\n",tmp1 <= i-a && i-a <= tmp2,tmp1 <= b-j && b-j <= tmp2);
  if((i-a==b-j)&&(tmp1 <= i-a && i-a <= tmp2)&&(tmp1 <= b-j && b-j <= tmp2)) return true;
  return false;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N,A,B,P,Q,R,S;
  cin>>N>>A>>B>>P>>Q>>R>>S;
  for(ll i=P;i<=Q;i++){
    for(ll j=R;j<=S;j++){
      if(calc(i,j,A,B,N)) cout<<"#";
      else cout<<".";
    }
    cout<<endl;
  }
}
