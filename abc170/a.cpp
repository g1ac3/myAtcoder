#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<int> A(5);
  rep(i,5) cin>>A[i];
  rep(i,5){
    if(A[i] == 0){
      cout<<i+1<<"\n";
      return 0;
    }
  }
}
//AC 02:00
