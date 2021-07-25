#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N;
  string S;
  cin>>N>>S;
  ll tot = (N+1)*N/2;
  ll st = 1;
  for(int i=0;i<(int)S.size()-1;i++){
    if(S[i]==S[i+1]) st++;
    else{
      tot -= st*(st+1)/2;
      st = 1;
    }
  }
  tot -= st*(st+1)/2;
  cout<<tot<<"\n";
}
//19:40 AC
