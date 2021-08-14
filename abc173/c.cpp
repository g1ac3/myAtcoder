#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int H,W,K,ans=0;
  cin>>H>>W>>K;
  vector<string> A(H);
  rep(i,H) cin>>A[i];
  for(int i=0;i<(1<<H);i++){
    for(int j=0;j<(1<<W);j++){
      int cnt = 0;
      for(int k=0;k<H;k++){
        if(i>>k&1) continue;
        for(int l=0;l<W;l++){
          if(j>>l&1) continue;
          if(A[k][l]=='#') cnt++;
        }
      }
      if(cnt==K) ans++;
    }
  }
  cout<<ans<<"\n";
}
//AC 12:10
