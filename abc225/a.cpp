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
  set<char> A;
  for(int i=0;i<(int)S.size();i++){
    A.insert(S[i]);
  }
  if(A.size()==1){
    cout<<1<<endl;
  }else if(A.size()==2){
    cout<<3<<endl;
  }else{
    cout<<6<<endl;
  }
}
