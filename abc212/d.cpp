#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<ll,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int Q;
  cin>>Q;
  priority_queue<ll,vector<ll>,greater<ll>> q;
  ll sum = 0;
  for(int i=0;i<Q;i++){
    ll t,x;
    cin>>t;
    if(t==1){
      cin>>x;
      q.push(x-sum);
    }else if(t==2){
      cin>>x;
      sum += x;
    }else{
      ll tmp = q.top();q.pop();
      cout<<tmp+sum<<"\n";
    }
  }
}
/*
11
1 5
1 8
2 2
1 6
3
1 8
2 3
2 10
3
3
3

*/
