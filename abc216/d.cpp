#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
vector<stack<int>> A;
map<int,pair<int,int>> MAP;
int N,M;

void open(int i){
  //printf("open %d\n",i);
  if(A[i].size()==0) return;
  int a = A[i].top();A[i].pop();
  if(MAP[a].first>0){
    MAP[a].first=0;
    open(MAP[a].second);
    open(i);
  }else{
    MAP[a].first++;
    MAP[a].second = i;
  }
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin>>N>>M;
  A.resize(M);
  rep(i,M){
    int k;
    cin>>k;
    rep(j,k){
      int t;
      cin>>t;
      A[i].push(t);
    }
  }
  rep(i,M){
    open(i);
  }
  bool b = true;
  rep(i,M){
    if(A[i].size()!=0) b = false;
  }
  if(b) cout<<"Yes\n";
  else cout<<"No\n";
}
/*


*/
