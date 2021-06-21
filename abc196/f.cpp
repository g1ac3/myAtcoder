#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
static const ll INF = 1001001001;
int main(){
  string s,t;
  cin>>s>>t;
  int sl = s.size();
  int tl = t.size();
  int MIN = INF;
  for(int i=0;i<sl-tl+1;i++){
    int cnt = 0;
    int k = i;
    for(int j=0;j<tl;j++){
      if(s[k++] != t[j]) cnt++;
    }
    if(cnt == 0){
      cout<<0;
      return 0;
    }
    MIN = min(MIN,cnt);
  }
  cout<<MIN;
}
