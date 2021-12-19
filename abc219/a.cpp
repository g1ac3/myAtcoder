#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a;
  cin>>a;
  if(a<40) cout<<40-a<<endl;
  else if(a<70) cout<<70-a<<endl;
  else if(a<90) cout<<90-a<<endl;
  else cout<<"expert\n";
}
