#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int gcd(int a,int b){
  int r;
  while(b>0){
    r = a%b;
    a = b;
    b = r;
  }
  return a;
}
int main(){
  int A,B;
  cin>>A>>B;
  int MAX = 0;
  for(int i=A;i<B;i++){
    for(int j=i+1;j<=B;j++){
      //MAX = max(MAX,gcd(j,i));
      printf("%5d %5d %d\n",i,j,gcd(j,i));
    }
  }
  cout<<MAX;
}
