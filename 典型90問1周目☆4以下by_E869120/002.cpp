#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
unordered_set<string> S;
vector<string> ans;
int N;
void solve(int i,string s){
  if(i==N) S.insert(s);
  else{
    solve(i+2,"("+s+")");
    solve(i+2,"()"+s);
    solve(i+2,s+"()");
  }
}
void narabi(int l,int r){
  vector<int> cnt(ans.size());
  for(int i=0;i<ans.size();i++){
    for(int j=l;j<r;j++){
      if(ans[i][j] != '(') j=r;
      cnt[i]++;
    }
  }
  for(int i=0;i<ans.size();i++){
    for(int j=l;j<r;j++){
      if(ans[i][j] != '(') j=r;
      cnt[i]++;
    }
  }

}
int main(){
  cin>>N;
  if(N%2==1) return 0;
  solve(0,"");
  for(string tmp : S){
    ans.emplace_back(tmp);
  }
  narabi(0,N/2);
  narabi(N/2 + 1,N);

  for(string tmp : S) cout<<tmp<<"\n";
}
