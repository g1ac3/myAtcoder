#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
int f(int x){
  string s = to_string(x);
  cout<<stoi(s+s)<<"\n";
  return stoi(s+s);
}
int main(){
  int N;
  cin>>N;
  int x = 1;
  while(f(x) <= N){
    x++;
  }
  cout<<x-1;
}
