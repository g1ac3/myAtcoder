#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a,b,c,k;
  cin>>a>>b>>c>>k;
  int tmp = min(k,a);
  int sum = tmp;
  k-=tmp;
  if(k==0){
    cout<<sum<<endl;
    return 0;
  }
  tmp = min(k,b);
  k-=tmp;
  if(k==0){
    cout<<sum<<endl;
    return 0;
  }
  cout<<sum-k<<endl;
}
//AC 07:22
