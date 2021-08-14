#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
const ll MOD = 1e9+7;
const ll MOD2 = MOD*MOD;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,K;
  cin>>N>>K;
  if(N==K){
    ll ans = 1;
    rep(i,N){
      ll a;
      cin>>a;
      ans *= a;
      if(ans<0) ans += MOD2;
      ans = ans%MOD;
    }
    cout<<ans<<"\n";
    return 0;
  }

  vector<ll> A,B;
  rep(i,N){
    ll a;
    cin>>a;
    if(a>=0) A.emplace_back(a);
    else B.emplace_back(a);
  }
  ll ans = 1;
  if(B.size()==0){
    sort(A.begin(),A.end());
    reverse(A.begin(),A.end());
    for(int i=0;i<K;i++) {
      ans = ans*A[i];
      ans = ans%MOD;
    }
  }else if(A.size()==0){
    sort(B.begin(),B.end());
    reverse(B.begin(),B.end());
    for(int i=0;i<K;i++) {
      ans = ans*B[i];
      if(ans<0) ans += MOD2;
      ans = ans%MOD;
    }
  }else{
    sort(A.begin(),A.end());
    reverse(A.begin(),A.end());
    sort(B.begin(),B.end());
    bool h = true;
    int i=0,j=0;
    for(int k=0;k<K-1;k++){
      if(i!=A.size()-1&&j!=B.size()-1){
        if(A[i]>-B[j]){
          ans *= A[i];
          i++;
        }else{
          h = !h;
          ans *= B[j];
          j++;
        }
      }else if(i==A.size()-1){
        h = !h;
        ans *= B[j];
        j++;
      }else{
        ans *= A[i];
        i++;
      }
      if(ans<0) ans += MOD2;
      ans = ans%MOD;
    }
    if(h)ans *= A[i];
    else ans *= B[j];
    if(ans<0) ans += MOD2;
    ans = ans%MOD;
  }
  cout<<ans<<"\n";
}
