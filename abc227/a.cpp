#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,K,A;
  cin>>N>>K>>A;
  A--;
  K--;
  while(K--){
    //cout<<A<<endl;
    A = (A+1)%N;
  }
  cout<<A+1<<endl;
}
