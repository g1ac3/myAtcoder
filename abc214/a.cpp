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
  if(N>=212){
    cout<<"8\n";
  }else if(N>=126){
    cout<<"6\n";
  }else{
    cout<<"4\n";
  }

}
