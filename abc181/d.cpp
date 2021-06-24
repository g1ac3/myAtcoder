#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll=int64_t;
#define rep(i,n) for(int i=0;i<(n);++i)
static const ll MOD = 1000000007;
static const int M = 125;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S;
  cin>>S;
  int s = (int)S.size();
  if(s==1){
    if(S[0] == '8') cout<<"Yes";
    else cout<<"No";
    return 0;
  }else if(s==2){
    int a = std::stoi(S);
    reverse(S.begin(),S.end());
    int b = std::stoi(S);
    if(a%8==0||b%8==0)cout<<"Yes";
    else cout<<"No";
    return 0;
  }
  vector<int> A(10,0);
  for(int i=0;i<(int)S.size();++i){
    A[(S[i]-'0')]++;
  }
  //for(int x:A) cout<<x<<" ";
  //cout<<"\n\n";
  rep(i,M){
    int a = i*8+1000;
    //cout<<a<<"  ";
    bool t = false;
    vector<int> B(10);
    while(a>9){
      B[a%10]++;
      a/=10;
    }
    /*
    for(int x:B) cout<<x<<" ";
    cout<<"\n";
    */
    rep(j,10){
      if(A[j]<B[j]) t = true;
    }
    if(t) continue;
    cout<<"Yes";
    return 0;
  }
  cout<<"No";
}
//AC
