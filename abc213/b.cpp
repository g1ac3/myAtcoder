#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<P> A(N);
  rep(i,N){
    cin>>A[i].first;
    A[i].second = i+1;
  }
  sort(A.begin(),A.end());
  reverse(A.begin(),A.end());
  cout<<A[1].second<<"\n";
}
