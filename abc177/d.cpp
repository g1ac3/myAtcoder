#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P = pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
vector<int> UF;
int utop(int a){
  if(UF[a]<0) return a;
  return utop(UF[a]);
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  UF.resize(N,-1);
  rep(i,M){
    int a,b;
    cin>>a>>b;
    int ah = utop(a);
    int bh = utop(b);
    if(ah == bh) continue;
    if(UF[ah]<UF[bh]){
      int tmp = UF[bh];
      UF[bh] = ah;
      UF[ah] += tmp;
    }else{
      int tmp = UF[ah];
      UF[ah] = bh;
      UF[bh] += tmp;
    }
  }
  cout<<-*min_element(UF.begin(),UF.end());
}
