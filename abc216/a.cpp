#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S;
  cin>>S;
  int i=0;
  while(true){
    if(S[i]=='.')break;
    cout<<S[i];
    i++;
  }
  i++;
  if('0'<=S[i]&&S[i]<='2') cout<<"-\n";
  else if('7'<=S[i]&&S[i]<='9') cout<<"+\n";
}
