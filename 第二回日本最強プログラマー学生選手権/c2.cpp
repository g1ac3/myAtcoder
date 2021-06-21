#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  int A,B;
  cin>>A>>B;
  int i=B-1;
  while(i>0){
    int ans = (B/i)-(int)ceil(A/((1.0)*i));
    //printf("%5d %3d %3d %3d\n",i,B/i,(int)ceil(A/((1.0)*i)),ans);
    if(ans>=1){
      cout<<i;
      return 0;
    }
    i--;
  }
  cout<<"1";
  return 0;
}
