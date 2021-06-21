#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  string N;
  cin>>N;
  for(int i=N.size()-1;i>=0;i--){
    if(N[i] == '0') N.erase(i);
    else break;
  }
  for(int i=0;i<N.size();i++){
    if(N[i] != N[N.size()-i-1]){
      cout<<"No";
      return 0;
    }
  }
  cout<<"Yes";
}
