#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  int sx,sy,gx,gy;
  cin>>sx>>sy>>gx>>gy;
  double dy = sy/((sy+gy)*1.0);
  printf("%f",dy*(gx-sx) + sx);
}
