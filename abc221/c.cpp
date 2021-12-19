#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S;
  cin>>S;
  sort(S.rbegin(),S.rend());
  int N = (int)S.size();
  ll MAX = -1;
  for(int i=1;i<(1<<N)-1;i++){
    string A,B;
    for(int j=0;j<N;j++){
      if(i>>j&1){
        A += S[j];
      }else{
        B += S[j];
      }
    }

    ll a=stoi(A);
    ll b=stoi(B);
    //printf("%d,%d--%d\n",a,b,a*b);
    MAX = max(MAX,a*b);
  }
  cout<<MAX<<endl;
}
