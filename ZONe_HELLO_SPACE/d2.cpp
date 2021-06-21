#include<bits/stdc++.h>

using namespace std;

int main(){
  string S;
  cin>>S;
  bool c = true;
  string T;
  for(int i=0;i<(int)S.size();i++){
    if(S[i] == 'R') c = !c;
    else{
      if(c){
        if(T[T.size()-1] == S[i]) T.pop_back();
        else T = T + S[i];
      }else{
        if(T[0] == S[i]) T.erase(0,1);
        else T = S[i] + T;
      }
    }
  }
  if(c) cout<<T;
  else for(int i=T.size()-1;i>=0;i--) cout<<T[i];
}
