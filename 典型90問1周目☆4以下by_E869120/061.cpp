#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
  int Q;
  cin>>Q;
  vector<int> A,B;
  while(Q--){
    int t,x;
    cin>>t>>x;
    if(t==1){
      A.emplace_back(x);
    }else if(t==2){
      B.emplace_back(x);
    }else{
      if((int)A.size()>=x) cout<<A[A.size()-x]<<"\n";
      else cout<<B[x-A.size()-1]<<"\n";
    }
  }
}
