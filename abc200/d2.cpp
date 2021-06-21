#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int M = 200;
void output(int k){
  vector<int> ans;
  int i = 1;
  while(k){
    if(k&1)  ans.emplace_back(i);
    k >>= 1;
    i++;
  }
  cout<<ans.size();
  for(int x:ans)cout<<" "<<x;
  cout<<"\n";
}
int main(){
  int N;
  cin>>N;
  vector<int> A(N);
  for(int i=0;i<N;i++) cin>>A[i];
  N = min(8,N);
  vector<int> st(M);
  for(int s=1;s < (1<<N);s++){
    int x = 0;
    for(int i=0;i<N;i++){
      if(s>>i&1) x = (x + A[i])%M;
    }
    if(st[x] == 0) st[x] = s;
    else{
      cout<<"Yes\n";
      output(s);
      output(st[x]);
      return 0;
    }
  }
  cout<<"No";
  return 0;
}
