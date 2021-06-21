#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  int n;
  cin>>n;
  int a = 0;
  int b = 1000;
  int tmp;
  for(int i=0;i<n;i++){
    cin>>tmp;
    a = max(a,tmp);
  }
  for(int i=0;i<n;i++){
    cin>>tmp;
    b = min(b,tmp);
  }
  if(a>b) cout<<"0";
  else cout<<b-a+1;

}
