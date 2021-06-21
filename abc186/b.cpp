#include <bits/stdc++.h>
using namespace std;
static const int INF = 1001001001;
int main(){
  int h,w,min=INF;
  cin>>h>>w;
  vector<vector<int>> a(h,(vector<int>(w)));
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>>a[i][j];
      if(a[i][j] < min) min = a[i][j];
    }
  }
  int ans = 0;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      ans += a[i][j] - min;
    }
  }
  cout<<ans;
}
//5:00
