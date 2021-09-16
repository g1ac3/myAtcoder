#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int X,Y;
  cin>>X>>Y;
  if(Y%2!=0){
    cout<<"No\n";
    return 0;
  }
  int a = (4*X-Y);
  if(0<=a&&a<=2*X){
    cout<<"Yes\n";
  }else cout<<"No\n";
}
//AC 08:11
