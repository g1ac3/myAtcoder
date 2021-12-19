#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
template <typename T>
struct BIT {
    int n;             // 要素数
    vector<T> bit[2];  // データの格納先
    BIT(int n_) { init(n_); }
    void init(int n_) {
        n = n_ + 1;
        for (int p = 0; p < 2; p++) bit[p].assign(n, 0);
    }
    void add_sub(int p, int i, T x) {
        for (int idx = i; idx < n; idx += (idx & -idx)) {
            bit[p][idx] += x;
        }
    }
    void add(int l, int r, T x) {  // [l,r) に加算
        add_sub(0, l, -x * (l - 1));
        add_sub(0, r, x * (r - 1));
        add_sub(1, l, x);
        add_sub(1, r, -x);
    }
    T sum_sub(int p, int i) {
        T s(0);
        for (int idx = i; idx > 0; idx -= (idx & -idx)) {
            s += bit[p][idx];
        }
        return s;
    }
    T sum(int i) { return sum_sub(0, i) + sum_sub(1, i) * i; }
};
int main(){
  int N,K;
  cin>>N>>K;
  vector<ll> A(N);
  rep(i,N) cin>>A[i];
  sort(A.begin(),A.end());
  BIT<ll> B(N);
  rep(i,N) B.add(i+1,i+2,A[i]);
  ll ans = 0;
  int back = N;
  for(int i=1;i<=back-K+1;i++){
    ll a = B.sum(i);
    //cout<<" a "<<a<<" ";
    //printf("%lld %lld %lld\n",i,back,a);
    ans += a;
    B.add(i,i+1,-a);
    B.add(back-K+2,back+1,-a);
    if(B.sum(back)-B.sum(back-1)==0) back--;
  }
  ll MIN = B.sum(1);
  for(int i=2;i<=N;i++) MIN = min(MIN,B.sum(i)-B.sum(i-1));

  cout<<ans+min(MIN,0LL)<<endl;
}
