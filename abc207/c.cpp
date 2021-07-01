#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<pair<ll,ll>> A;
  rep(i,N){
    int t,l,r;
    cin>>t>>l>>r;
    l*=2;r*=2;
    if(t == 1) A.emplace_back(make_pair(l,r));
    else if(t == 2) A.emplace_back(make_pair(l,r-1));
    else if(t == 3) A.emplace_back(make_pair(l+1,r));
    else A.emplace_back(make_pair(l+1,r-1));
  }
  //for(auto [a,b]:A) cout<<a<<" "<<b<<"\n";
  int sum = 0;
  for(int i=0;i<N-1;i++){
    int l = A[i].first,r=A[i].second;
    for(int j=i+1;j<N;j++){
      if((l<=A[j].first&&A[j].first<=r)||(l<=A[j].second&&A[j].second<=r)||(A[j].first<=l&&r<=A[j].second)) sum++; //-> kousa sinai mono wo hantei better
    }
  }
  cout<<sum;
}
//AC
