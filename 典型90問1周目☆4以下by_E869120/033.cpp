#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  int H,W;
  cin>>H>>W;
  if(H==1||W==1) cout<<H*W;
  else cout<<((H+1)/2)*((W+1)/2);
}
