#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a,b,c;
  cin>>a>>b>>c;
  for(int i=1;i<10000;i++){
    if(a<=c*i&&c*i<=b){
      cout<<c*i<<endl;
      return 0;
    }
  }
  cout<<"-1\n";
}
