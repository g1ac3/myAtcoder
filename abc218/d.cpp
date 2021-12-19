#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  int N;
  cin>>N;
  vector<P> P(N);
  rep(i,N)cin>>P[i].first>>P[i].second;
  sort(P.begin(),P.end());
  ll ans = 0;
  rep(i,N){
    rep(j,N){
      if(P[i].first<P[j].first&&P[i].second<P[j].second){
        //printf("%d %d\n",i,j);
        if(binary_search(P.begin(),P.end(),make_pair(P[i].first,P[j].second))&&binary_search(P.begin(),P.end(),make_pair(P[j].first,P[i].second))) ans++;
      }
    }
  }
  cout<<ans<<endl;
}
