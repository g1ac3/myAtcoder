#include<bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  string S;
  cin>>S;
  int cnt = 0;
  for(int i=0;i<S.size()-3;i++){
    if(S[i] == 'Z'&&S[i+1]=='O'&&S[i+2]=='N'&&S[i+3]=='e') cnt++;
  }
  cout<<cnt;
}
