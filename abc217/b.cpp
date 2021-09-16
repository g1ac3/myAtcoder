#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  map<string,int> M;
  M["ABC"] = 1;
  M["ARC"] = 1;
  M["AGC"] = 1;
  M["AHC"] = 1;
  rep(i,3){
    string S;
    cin>>S;
    M[S]--;
  }
  if(M["ABC"] == 1) cout<<"ABC\n";
  if(M["ARC"] == 1) cout<<"ARC\n";
  if(M["AGC"] == 1) cout<<"AGC\n";
  if(M["AHC"] == 1) cout<<"AHC\n";
}
