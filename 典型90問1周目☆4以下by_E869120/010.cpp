#include <bits/stdc++.h>

using namespace std;
using ll=int64_t;

int main(){
  int N,Q;
  cin>>N;
  vector<pair<ll,ll>> S;
  S.emplace_back(make_pair(0,0));
  for(int i=0;i<N;i++){
    int c,p;
    cin>>c>>p;
    if(c==1) S.emplace_back(make_pair(S[i].first+p,S[i].second));
    else S.emplace_back(make_pair(S[i].first,S[i].second+p));
  }
  cin>>Q;
  int l,r;
  while(Q--){
    cin>>l>>r;
    cout<<S[r].first-S[l-1].first<<" "<<S[r].second-S[l-1].second<<"\n";
  }
}
