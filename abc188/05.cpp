#include <iostream>
#include <vector>

int main(){
  int n,m;
  std::cin>>n>>m;
  std::vector<int> x(n);
  std::vector<std::vector<int>> to(n);

  for(int i=0;i<n;i++) std::cin>>x[i];
  for(int i=0;i<m;i++){
    int a,b;
    std::cin>>a>>b;
    to[a-1].emplace_back(b-1);
  }
  const int INF = 2001001001;
  std::vector<int> dp(n,INF);
  int ans = -INF;
  for(int i=0;i<n;i++){
    ans = std::max(ans,x[i]-dp[i]);
    for(int j : to[i]){
      dp[j] = std::min(dp[j],dp[i]);
      dp[j] = std::min(dp[j],x[i]);
    }
  }
  std::cout<<ans;
}
