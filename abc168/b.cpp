#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int K;
  cin>>K;
  string S;
  cin>>S;
  if((int)S.size()>K){
    for(int i=0;i<K;i++) cout<<S[i];
    cout<<"...\n";
  }else{
    cout<<S<<"\n";
  }
}//AC 5:45