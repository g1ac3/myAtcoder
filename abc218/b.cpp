#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int N = 26;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<int> A(N);
  rep(i,N) cin>>A[i];
  rep(i,N) printf("%c",A[i]-1+'a');
  cout<<endl;
}
