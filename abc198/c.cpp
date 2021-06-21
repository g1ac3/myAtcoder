#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  ll R,X,Y;
  cin>>R>>X>>Y;
  double d = X*X + Y*Y;
  d = sqrt(d);
  //cout<<d<<" ";
  if(d<R){
    cout<<"2";
  }else{
    cout<<ceil(d/R);
  }
}
