#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int H = 1000;
  int W = 1000;
  cout<<H<<" "<<W<<"\n";
  cout<<"1 1\n";
  cout<<"999 999\n";
  rep(i,H){
    rep(j,W){
      if(j%2==0) cout<<". ";
      else cout<<"# ";
    }
    cout<<"\n";
  }
}
