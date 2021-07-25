#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K;
  cin>>N>>K;
  vector<int> S(27);
  for(int i=0;i<N;i++){
    char tmp;
    cin>>tmp;
    S[tmp-'a'] ++;
  }
  int i=0;
  while(K>0){
    if(S[i] <= K){
      K -= S[i];
      while(S[i]--) printf("%c",i+'a');
    }
    i++;
  }
}
