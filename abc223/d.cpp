#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  vector<P> A,B;
  vector<int> ans(N),P(N);
  rep(i,N){
    ans[i] = i+1;
    P[i] = i+1;
  }
  rep(i,M){
    int a,b;
    cin>>a>>b;
    if(a<b) B.emplace_back(a,b);
    else A.emplace_back(b,a);
  }

}
/*
4 1
4 1

2 3 4 1

4 3
4 1
4 3
3 1

2 4 3 1

4 3
4 1
4 3

2 4 1 3

4 3
3 1
4 1
4 3

2 4 1 3
*/
