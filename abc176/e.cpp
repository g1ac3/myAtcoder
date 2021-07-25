#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int H,W,M;
  cin>>H>>W>>M;
  //vector<vector<bool>> A(H,vector<bool>(W));
  vector<P> A(M);
  vector<int> h(H),w(W);
  rep(i,M){
    int a,b;
    cin>>a>>b;
    --a;--b;
    //A[a][b] = true;
    //Ah[a]=false;Aw[b]=false;
    A[i] = {a,b};
    h[a]++;w[b]++;
  }
  int hMAX = *max_element(h.begin(),h.end());
  int wMAX = *max_element(w.begin(),w.end());
  ll cnth=0,cntw=0;
  rep(i,H) if(hMAX == h[i]) cnth++;
  rep(i,W) if(wMAX == w[i]) cntw++;
  ll cnt = cnth*cntw;
  rep(i,M){
    auto [a,b] = A[i];
    if(hMAX==h[a]&&wMAX==w[b]) cnt--;
  }
  /*
  bool t = false;
  for(int i=0;i<H;i++){
    if(h[i] != hMAX)continue;
    for(int j=0;j<W;j++){
      if(w[j] != wMAX)continue;
      //t |= !A[i][j];
      t|= (Ah[i]|Aw[j]);
    }
  }
  */
  int ans = hMAX + wMAX;
  if(cnt) cout<<ans<<"\n";
  else cout<<ans-1<<"\n";
}
//-AC 1:00:00 
