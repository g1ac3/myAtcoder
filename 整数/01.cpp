#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  int N;
  cin>>N;
  int nr = sqrt(N);
  vector<bool> used(nr+1);
  for(int i=2;i<=nr;i++){
    if(!used[i]){
      for(int j=1;j*i<=nr;j++) used[j*i]=true;
      if(N%i==0){
        cout<<"NO\n";
        return 0;
      }
    }
  }
  cout<<"YES\n";
  return 0;
}
