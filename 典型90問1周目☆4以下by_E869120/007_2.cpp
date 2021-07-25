#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  int N,Q;
  cin>>N;
  vector<int> A(N);
  for(int i=0;i<N;i++) cin>>A[i];
  sort(A.begin(),A.end());
  vector<int> ans;
  cin>>Q;
  while(Q--){
    int b;
    int l=0,r=N;
    cin>>b;
    while(r-l != 1){
      if(b>A[(l+r)/2]) l = (l+r)/2;
      else r = (l+r)/2;
    }
    if(abs(b-A[l]) < abs(b-A[r])) ans.emplace_back(abs(b-A[l]));
    else ans.emplace_back(abs(b-A[r]));
  }
  for(int x:ans)cout<<x<<"\n";
}
