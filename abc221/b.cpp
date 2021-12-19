#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S,T;
  cin>>S>>T;
  if(S==T){
    cout<<"Yes\n";
    return 0;
  }
  int cnt = 0;
  for(int i=0;i<(int)S.size();i++){
    if(S[i]!=T[i]) cnt++;
  }
  if(cnt!=2){
    cout<<"No\n";
    return 0;
  }
  for(int i=0;i<(int)S.size();i++){
    if(S[i]!=T[i]){
      if(S[i]==T[i+1]&&T[i]==S[i+1]){
        cout<<"Yes\n";
        return 0;
      }
    }
  }
  cout<<"No\n";
}
