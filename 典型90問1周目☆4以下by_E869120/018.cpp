#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  double T,L,X,Y,Q;
  cin>>T>>L>>X>>Y>>Q;
  double t;
  while(Q--){
    cin>>t;
    double th = (2*M_PI*t)/T;
    double h = L*(1-cos(th));
    double y2 = 2*Y+L*sin(th);
    double s = sqrt(4*X*X+y2*y2);
    //printf("%f %f %f %f %f\n",th,h,s,y2,h/s);
    printf("%.10f\n",atan2(h,s)*180/M_PI);
  }

}
