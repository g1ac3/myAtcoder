#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  int N,Q;
  cin>>N>>Q;
  vector<P> A(N+1,{-1,-1});
  while(Q--){
    /*
    for(int i=1;i<=N;i++) printf("%4d",i);
    cout<<"\n";
    for(int i=1;i<=N;i++) printf("%4d",A[i].first);
    cout<<"\n";
    for(int i=1;i<=N;i++) printf("%4d",A[i].second);
    cout<<"\n";
    */
    int t;
    cin>>t;
    if(t==1){
      int x,y;
      cin>>x>>y;
      A[x].second = y;
      A[y].first = x;
    }else if(t==2){
      int x,y;
      cin>>x>>y;
      A[x].second = -1;
      A[y].first = -1;
    }else{
      int x;
      vector<int> ans;
      cin>>x;
      while(A[x].first>0) x = A[x].first;
      while(x>0){
        ans.emplace_back(x);
        x = A[x].second;
      }
      cout<<ans.size()<<" ";
      for(int a:ans) cout<<a<<" ";
      cout<<endl;
    }
  }
}
/*
5 8
3 1
3 2
1 1 2
3 1
3 2
2 1 2
3 1
3 2

*/
