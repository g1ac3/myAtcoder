#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
  int n;
  cin>>n;
  n%=10;
  if(n==3){
    cout<<"bon\n";
  }else if(n==0||n==1||n==6||n==8){
    cout<<"pon\n";
  }else{
    cout<<"hon\n";
  }
}
//AC 3:00