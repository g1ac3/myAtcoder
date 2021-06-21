#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int scalc(int a,int b,int c,int d){
  if(a+b == c+d) return 1;
  else if(a-b == c-d) return 1;
  else if(abs(a-c)+abs(b-d)<4) return 1;
  return 0;
}
int calc(int a,int b,int c,int d){
  if(a==c && b==d) return 0;
  else if(a+b == c+d) return 1;
  else if(a-b == c-d) return 1;
  else if(abs(a-c)+abs(b-d)<4) return 1;
  for(int i=-2;i<3;i++){
    for(int j=-2;j<3;j++){
      if(scalc(a+i,b+j,c,d)==1) return 2;
    }
  }
  if(scalc(a+3,b,c,d)==1) return 2;
  if(scalc(a-3,b,c,d)==1) return 2;
  if(scalc(a,b+3,c,d)==1) return 2;
  if(scalc(a,b-3,c,d)==1) return 2;
  if((a+b)%2 == (c+d)%2) return 2;
  else return 3;
}
int main(){
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  cout<<calc(a,b,c,d);
}
