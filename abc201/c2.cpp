#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
vector<int> use(10);
bool check(vector<bool> A){
  for(int i=0;i<10;i++){
    if(use[i] == 1){
      if(!A[i]) return false;
    }else if(use[i] == -1){
      if(A[i]) return false;
    }
  }
  return true;
}
int main(){
  string S;
  cin>>S;
  for(int i=0;i<10;i++){
    if(S[i] == 'o') use[i] = 1;
    else if(S[i] == '?') use[i] = 0;
    else use[i] = -1;
  }
  int sum = 0;
  for(int i=0;i<10000;i++){
    /*
    string tmp = to_string(i);
    while(tmp.size()<4){
      tmp += '0';
    }
    */
    //cout<<i<<"\n";
    vector<bool> A(10);
    int j = i;
    if(j<1000) A[0] = true;
    while(j>0){
      A[j%10] = true;
      j/=10;
    }
    if(check(A)) sum++;
    //else cout<<"  ====== \n";
  }
  cout<<sum;
}
