#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  bool t =false;
  cin>>N;
  int st = 0;
  rep(i,N){
    int a,b;
    cin>>a>>b;
    if(a==b)st++;
    else st = 0;
    if(st == 3) t = true;
  }
  if(t) cout<<"Yes";
  else cout<<"No";
}
