#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ll A,B,C;
  cin>>A>>B>>C;
  if(A>=0&&B>=0){
    if(A==B) cout<<"=";
    else if(A>B) cout<<">";
    else cout<<"<";
  }else if(A<0&&B>=0){
    A = abs(A);
    if(C%2==0){
      if(A==B) cout<<"=";
      else if(A>B) cout<<">";
      else cout<<"<";
    }else{
      cout<<"<";
    }
  }else if(A>=0&&B<0){
    B = abs(B);
    if(C%2==0){
      if(A==B) cout<<"=";
      else if(A>B) cout<<">";
      else cout<<"<";
    }else{
      cout<<">";
    }
  }else{
    A = abs(A);
    B = abs(B);
    if(C%2==0){
      if(A==B) cout<<"=";
      else if(A>B) cout<<"<";
      else cout<<">";
    }else{
      if(A==B) cout<<"=";
      else if(A>B) cout<<">";
      else cout<<"<";
    }
  }
}
