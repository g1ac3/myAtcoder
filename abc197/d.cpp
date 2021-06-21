#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  int n;
  cin>>n;
  int x,y;
  int x2,y2;
  cin>>x>>y>>x2>>y2;
  double rad = 2*M_PI/n;
  if(n%2==0){
    double a = (x+x2)/2.0;
    double b = (y+y2)/2.0;
    //printf("%lf %lf %lf\n",a,b,rad);
    printf("%lf %lf",(x-a)*cos(rad)-(y-b)*sin(rad)+a,(x-a)*sin(rad)+(y-b)*cos(rad)+b);
  }
}
