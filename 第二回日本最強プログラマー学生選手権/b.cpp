#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
vector<int> a;
vector<int> b;
vector<int> c;
void mser(int i){
  for(int j=0;j<m;j++){
    if(a[i] == b[j]) return 0;
    if(a[i] < b[j]){
      c.emplace_back(a[i]);
    }
  }
}
int main(){
  int n,m;
  cin>>n>>m;
  a.resize(n);
  b.resize(m);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<m;i++) cin>>b[i];
  for(int i=0;i<n;i++){
    mser(i);
  }

}
