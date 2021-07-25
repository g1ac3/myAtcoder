#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  unordered_set<string> ans;
  int N;
  cin>>N;
  for(int i=0;i<N;i++){
    string tmp;
    cin>>tmp;
    if(ans.count(tmp)==0) cout<<i+1<<"\n";
    ans.insert(tmp);
  }
}
