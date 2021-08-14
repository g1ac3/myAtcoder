#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll K;
  cin>>K;
  int a = 7%K;
  for(int i=0;i<K;i++){
    if(a == 0){
      cout<<i+1<<"\n";
      return 0;
    }
    a = (a*10 + 7)%K;
  }
  cout<<"-1\n";
}
//AC 07:45
