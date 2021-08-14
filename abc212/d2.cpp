#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<ll,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll INF = 1e17;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int Q;
  cin>>Q;
  for(int i=0;i<Q;i++){
    ll t,x;
    cin>>t;
    if(t==1){
      cin>>x;
      update(i,x);
    }else if(t==2){
      cin>>x;
    }else{
      cout<<a<<"\n";
    }
  }
}
