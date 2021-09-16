#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int S,T;
  cin>>S>>T;
  int cnt =0;
  rep(a,S+1){
    rep(b,S+1){
      rep(c,S+1){
        if(a+b+c<=S&&a*b*c<=T)cnt++;
      }
    }
  }
  cout<<cnt<<"\n";
}
