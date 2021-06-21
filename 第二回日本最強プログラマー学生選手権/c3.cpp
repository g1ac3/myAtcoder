#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  int A,B;
  cin>>A>>B;
  int i=B-1;
  while(i>0){
    for(int j=i;j>=A;j--){
      int ans = (B/i)-ceil(j/i);
      printf("%5d%5d %3d%3d %3d\n",i,j,B/i,ceil(j/i),ans);
      if(ans>=2){
        cout<<i;
        return 0;
      }
    }
    i--;
  }
  cout<<"1";
  return 0;
}
