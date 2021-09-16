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
  vector<int> A(N);
  rep(i,N){
    int a;
    cin>>a;
    A[a-1] = i+1;
  }
  for(int x:A) cout<<x<<" ";
  cout<<"\n";
}
