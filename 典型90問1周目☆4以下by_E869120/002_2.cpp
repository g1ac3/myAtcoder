#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
vector<vector<unordered_set<string>>> S;
vector<string> ans;
int N;
void solve(int i,string s,int l,int r){
  if(i==N) S[l][r].insert(s);
  else{
    solve(i+2,"("+s+")",l+1,r);
    solve(i+2,"()"+s,l+1,r);
    solve(i+2,s+"()",l,r+1);
  }
}
int main(){
  cin>>N;
  if(N%2==1) return 0;
  S.resize(N/2);
  for(int i=0;i<N/2;i++) S[i].resize(N/2);
  solve(0,"",0,0);
  cout<<"=====\n";
  for(int i=0;i<N/2;i++){
    for(int j=0;j<N/2;j++){

      for(string tmp : S[i][j]) cout<<tmp<<"\n";
    }
  }
}
