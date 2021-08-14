#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const int M = 26;
int main(){
  ll N;
  cin>>N;
  ll A = M;
  ll pre = 0;
  int size = 1;
  ll tmp = M;
  while(N>A){
    tmp *= M;
    pre = A;
    A += tmp;
    size++;
  }
  /*
  cout<<A<<"\n";
  cout<<size<<"\n";
  cout<<pre<<"\n";
  cout<<N-pre-1<<"\n";
  */
  N = N-pre-1;
  string S;
  rep(i,size) S.push_back('a');
  size--;
  while(N>0){
    S[size] += N%M;
    N/=M;
    size--;
  }
  cout<<S<<"\n";
}
//AC . 54:10