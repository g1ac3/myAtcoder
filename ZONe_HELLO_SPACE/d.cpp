#include<bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  string S;
  cin>>S;
  S +='R';
  bool c = true;
  string A,B;
  for(int i=0;i<(int)S.size();i++){
    if(S[i] == 'R') c = !c;
    else{
      if(c){
        if(A[A.size()-1] == S[i]) A.pop_back();
        else A += S[i];
      }else{
        if(B[B.size()-1] == S[i]) B.pop_back();
        else B += S[i];
      }
    }
  }
  int cnt = 0;
  for(int i=0;i<A.size()&&i<B.size();i++){
    if(A[i] == B[i]) cnt++;
    else break;
  }
  A.erase(0,cnt);
  B.erase(0,cnt);
  reverse(B.begin(),B.end());
  string T = B + A;
  if(!c) cout<<T;
  else for(int i=T.size()-1;i>=0;i--) cout<<T[i];
}
