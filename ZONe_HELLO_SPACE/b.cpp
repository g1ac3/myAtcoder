#include<bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  int N,D,H;
  cin>>N>>D>>H;
  double MAX = 0;
  for(int i=0;i<N;i++){
    int d,h;
    cin>>d>>h;
    //cout<<H + (h-H)*D/((D-d)*1.0)<<"\n";
    MAX = max(MAX,H + (h-H)*D/((D-d)*1.0));
  }
  printf("%f",MAX);
}
