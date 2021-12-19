#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S;
  cin>>S;
  vector<string> ans;
  int s = S.size();
  for(int i=0;i<s;i++){
    ans.emplace_back(S);
    S = S[s-1] + S.substr(0,s-1);
    //cout<<S<<endl;
  }
  sort(ans.begin(),ans.end());
  cout<<ans[0]<<endl;
  cout<<ans[ans.size()-1]<<endl;
}
