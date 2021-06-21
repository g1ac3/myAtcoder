#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
double dp[101][101][101];
bool ch[101][101][101];
double calc(int a,int b,int c){
  if(ch[a][b][c]) return dp[a][b][c];
  if(a==100 || b==100 || c==100) return 0;
  double n = a+b+c;
  double f = 0;
  if(a != 0) f += (calc(a+1,b,c)+1)*a/n;
  //cout<<f<<"a\n";
  if(b != 0) f += (calc(a,b+1,c)+1)*b/n;
  //cout<<f<<"b\n";
  if(c != 0) f += (calc(a,b,c+1)+1)*c/n;
  //cout<<"  "<<f<<"c\n";
  ch[a][b][c] = true;
  return dp[a][b][c] = f;
}
/*
double calc(int a,int b,int c){
  double n = a+b+c;
  double f = (100-a)*a/n + (100-b)*b/n + (100-c)*c/n;
  return f;
}
*/
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  printf("%f",calc(a,b,c));
}
