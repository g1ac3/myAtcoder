
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N;
  cin>>N;
  ll ans = 1;
  for(ll i=2;i<=N;i++){
  	int n = i;
  	int cnt = 1;
    for(ll j=2;j*j<=i;j++){
    	int tmp = 0;
    	while(n%j==0){
    		n/=j;
    		tmp++;
    	}
 		cnt *= tmp+1;
    }
    if(n!=1) cnt *= 2;
    ans += i*cnt;
  }
  cout<<ans<<"\n";
}//gutyoku TLE 