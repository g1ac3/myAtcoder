#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  int l;
  cin>>l;
  l--;
  int cut = 11;
  vector<int> c;
  vector<int> m = {2,2,2,2,2,2,2,2,3,3,3,3,5,5,7,11};
  for(int i=l;i>l-cut;i--) c.emplace_back(i);
  for(int i=0;i<m.size();i++){
    for(int j=0;j<c.size();j++){
      //printf("%d %d %d %d\n",i,j,m[i],c[j]);
      if(c[j] % m[i] == 0){
        c[j] /= m[i];
        break;
      }
    }
  }
  ll ans = 1;
  for(int x:c) ans*=x;
  cout<<ans;
}
