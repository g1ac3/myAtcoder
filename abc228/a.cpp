#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int s,t,x;
  cin>>s>>t>>x;
  if(s<t&&(s<=x&&x<t)){
    cout<<"Yes\n";
  }else if(s>t&&(s<=x||x<t)){
    cout<<"Yes\n";
  }else{
    cout<<"No\n";
  }
}
