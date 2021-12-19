#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  set<string> S;
  rep(i,N){
    int l;
    cin>>l;
    string s;
    rep(j,l){
      string tmp;
      cin>>tmp;
      tmp += " ";
      s+=tmp;
    }
    S.insert(s);
  }
  cout<<S.size()<<endl;
}
