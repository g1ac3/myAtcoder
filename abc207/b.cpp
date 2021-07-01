#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  int cnt = 0;
  if(c*d<=b){
    cout<<"-1";
    return 0;
  }
  while(d*c*cnt<a+b*cnt){ // -> cnt = (a+dc-b+1)/(dc-b);
    //printf("%d %d\n",d*c*cnt,a+b*cnt);
    cnt++;
  }
  cout<<cnt;
}
//AC
