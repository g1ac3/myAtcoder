#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  int n;
  cin>>n;
  vector<int> l(n,INT_MAX),r(n,INT_MIN);
  for(int i=0;i<n;i++){
    int x,c;
    cin>>x>>c;
    c--;
    l[c] = min(l[c],x);
    r[c] = max(l[c],x);
  }
  std::cout<<"-------------\n";
  vector<pair<int,int>> d;
  d.emplace_back(0,0);
  for(int i=0;i<n;i++){
    if(l[i] != INT_MAX) d.emplace_back(l[i],r[i]);
  }
  d.emplace_back(0,0);
  vector<ll> dp(2);
  const ll LINF = 1ll<<60;
  for(int i=1;i<d.size();i++){
    vector<ll> p(2,LINF);
    swap(dp,p);
    int l = d[i].first, r=d[i].second;
    for(int j=0;j<2;j++){
      int x = j ? d[i-1].second : d[i-1].first;
      dp[0] = min(dp[0],p[j] + abs(x-r) + (r-l));
      dp[1] = min(dp[1],p[j] + abs(x-l) + (r-l));
    }
    cout<<dp[0]<<" "<<dp[1]<<"\n";
  }
  std::cout<<"-------------\n";
  cout<<dp[0]<<"\n";
  std::cout<<"-------------\n";
  for(int i=0;i<d.size();i++){
    printf("%d %d\n",d[i].first,d[i].second);
  }
}
