#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  ll N;
  cin>>N;
  vector<string> S(N);
  vector<ll> T(N);
  for(int i=0;i<N;i++){
    cin>>S[i]>>T[i];
  }
  vector<ll> c(N);
  for(int i=0;i<N;i++) c[i]=T[i];
  sort(c.begin(),c.end());
  ll se = c[c.size()-2];
  for(int i=0;i<N;i++){
    if(T[i] == se){
      cout<<S[i];
      return 0;
    }
  }
}
