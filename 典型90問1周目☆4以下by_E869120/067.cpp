#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
  int K;
  string N;
  cin>>N>>K;
  if(N == "0"){
    cout<<"0";
    return 0;
  }
  while(K--){
    int size = N.size();
    long long x=1,ans=0;
    for(int i=size-1;i>=0;i--){
      ans += (N[i] -'0')*x;
      x *= 8LL;
    }
    N.clear();
    while(ans>0){
      N += (ans%9 + '0');
      ans /= 9;
    }
    for(int i=0;i<(int)N.size();i++)if(N[i] == '8')N[i] = '5';
    reverse(N.begin(),N.end());
  }
  cout<<N;
}
