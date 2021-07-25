#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  int N,K;
  string S;
  cin>>N>>K>>S;
  int l = 0;
  for(int i=0;i<K;i++){
    char c = *min_element(S.begin()+l,S.end()-K+1+i);
    for(int j=l;j<N-K+1+i;j++){
      if(S[j] == c){
        cout<<c;
        l = j + 1;
        break;
      }
    }
  }
}
