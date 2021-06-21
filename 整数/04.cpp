#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  int N;
  cin>>N;
  int N2 = sqrt(N);
  vector<int> ans;
  for(int i=2;i<=N2;i++){
    while(N%i==0){
      ans.emplace_back(i);
      N/=i;
    }
  }
  if(N!=1) ans.emplace_back(N);
  for(int x:ans) cout<<x<<" ";
  if(ans.size()==0) cout<<"1";
}
