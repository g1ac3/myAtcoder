#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
map<string,vector<string>> m;
map<string,int> n;
vector<string> m_v(vector<string> a,string s){
  a.emplace_back(s);
  return a;
}
int dfs(string t){
  if(n.find(t)!=n.end()) return n[t];
  if(m.find(t)==m.end()) return n[t] = 1;
  n[t] = 0;
  vector<int> sum(3,0);
  for(string s:m[t]){
    sum[1 + -1*dfs(s)]++;
  }
  if(sum[2]>0) return n[t] = 1;
  else if(sum[0]==m[t].size()) return n[t] = -1;
  else return n[t] = 0;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<string> game(N);
  rep(i,N){
    string tmp;
    cin>>tmp;
    string s = tmp.substr(0,3);
    string t = tmp.substr(tmp.size()-3,3);
    game[i] = t;
    m[s] = m_v(m[s],t);
    //for(string i:m[s]) cout<<i<<" ";
    //cout<<s<<" "<<t<<"\n";
  }
  for(int i=0;i<N;i++){
    //unordered_set<string> s;
    string t = game[i];
    dfs(t);

    if(n[t]==1) cout<<"Takahashi\n";
    else if(n[t]==-1) cout<<"Aoki\n";
    else cout<<"Draw\n";
  }
}
