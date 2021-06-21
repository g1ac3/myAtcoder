#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  int A,B;
  cin>>A>>B;
  for(int j=B-1;j>=A;j--){
    int i=j;
    while(i>0){
      int ans = (B/i)-ceil(A/i);
      printf("%5d%5d %3d%3d %3d\n",i,j,B/i,A/i,ans);
      if(ans>=2){
        cout<<i;
        return 0;
      }
      i--;
    }
  }
  cout<<"1";
  return 0;
}
