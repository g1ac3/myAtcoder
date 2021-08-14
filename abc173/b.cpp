#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  map<string,int> M;
  int N;
  cin>>N;
  rep(i,N){
    string S;
    cin>>S;
    M[S]++;
  }
  vector<string> T{"AC","WA","TLE","RE"};
  for(string s:T){
    cout<<s<<" x "<<M[s]<<"\n";
  }
}
//AC 5:44
