#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,P;
  cin>>N>>P;
  int ans = 0;
  rep(i,N){
    int a;
    cin>>a;
    if(a<P) ans++;
  }
  cout<<ans<<endl;
}
