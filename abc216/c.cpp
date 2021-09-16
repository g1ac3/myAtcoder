#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N;
  cin>>N;
  vector<char> ans;
  while(N>0){
    if(N%2==0){
      N/=2;
      ans.emplace_back('B');
    }else{
      N--;
      ans.emplace_back('A');
    }
  }
  reverse(ans.begin(),ans.end());
  for(char a:ans) cout<<a;
  cout<<"\n";
}
