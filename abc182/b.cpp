#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  int max = -1;
  int ans = -1;
  int end = *max_element(a.begin(),a.end());
  for(int i=2;i<=end;i++){
    int cnt = 0;
    for(int j=0;j<n;j++){
      if(a[j]%i==0) cnt++;
    }
    cout<<cnt<<" ";
    if(cnt > max){
      max = cnt;
      ans = i;
    }
  }
  cout<<ans;
}
