#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  string S;
  int N;
  cin>>S>>N;
  vector<string> A(N),B(N);
  rep(i,N) cin>>A[i];
  rep(i,N)for(char t:A[i])B[i] += S[t-'a'];
  sort(B.begin(),B.end());
  for(int i=0;i<N;i++){
    string s;
    for(char t:B[i])s+=S[t-'a'];
    cout<<B[i]<<" ";
    cout<<s<<endl;
  }
}
/*
bacdefghijklmnopqrstuvwxzy
3
abab
baba
abac

bacdefghijklmnopqrstuvwxzy
3
abayb
baby
abaza

bacdefghijklmnopqrstuvwxzy
3
abcde
fghij
kkkll

zyxwvutsrqponmlkjihgfedcba
2
aaaaaaa
bbbbbbb
*/
