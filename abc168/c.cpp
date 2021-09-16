#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  double A,B,H,M;
  cin>>A>>B>>H>>M;
  double th = H*30 + M*0.5;
  double ph = M*6;
  th = (M_PI*th)/180;
  ph = (M_PI*ph)/180;
  double Y=A*cos(th),X=A*sin(th);
  double y=B*cos(ph),x=B*sin(ph);
  printf("%.12f\n",sqrt((Y-y)*(Y-y)+(X-x)*(X-x)));
}
//AC 18:20