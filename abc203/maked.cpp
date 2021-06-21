#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
int main(){
  ll N;
  cin>>N;
  cout<<N<<" "<<N/2<<"\n";
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cout<<i+j<<" ";
    }
    cout<<"\n";
  }
}
