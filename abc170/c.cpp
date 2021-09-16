#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int X,N;
  cin>>X>>N;
  map<int,int> A;
  rep(i,N){
    int a;
    cin>>a;
    A[a]++;
  }
  int MIN = 10000;
  int idx = -1;
  for(int i=-100;i<202;i++){
    if(A[i]!=0) continue;
    int b = abs(X-i);
    //printf("%d %d %d\n",i,b,MIN);
    if(b<MIN){
      MIN = b;
      idx = i;
    }
  }
  cout<<idx<<"\n";
}
//WA1 20:00 (25:00)
