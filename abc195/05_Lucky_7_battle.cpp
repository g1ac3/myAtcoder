#include <bits/stdc++.h>

using ll = int64_t;

int main(){
  ll n;
  std::string s,x;
  std::cin>>n>>s>>x;
  std::vector<ll> dp(7);
  dp[0] = 1;
  ll ten = 1;
  for(int i=n-1;i>=0;i--){
    std::vector<ll> old(7);
    swap(dp,old);
    for(ll j=0;j<7;j++){
      std::cout<<j<<" dp : ";
      for(ll x : dp) std::cout<<x<<" ";
      std::cout<<"\n";
      std::cout<<"  od : ";
      for(ll x : old) std::cout<<x<<" ";
      std::cout<<"\n--------------- ";
      ll nj = (j + ten*(s[i]-'0'))%7;
      if(x[i] == 'T'){
        dp[j] = old[j] | old[nj];
      }else{
        dp[j] = old[j] & old[nj];
      }
      printf("nj:%lld dp[%lld]:%lld old[%lld]:%lld old[%lld]:%lld %lld\n",nj,j,dp[j],j,old[j],nj,old[nj],ten);
    }
    ten = (ten*10)%7;
  }
if(dp[0] == 1) std::cout<<"Takahashi";
else std::cout<<"Aoki";
}
