#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
template <typename T>
struct RMQ {
    const T INF = numeric_limits<T>::max();
    int n;
    vector<T> dat, lazy;
    RMQ(int n_) : n(), dat(n_ * 4, INF), lazy(n_ * 4, INF) {
        int x = 1;
        while (n_ > x) x *= 2;
        n = x;
    }
    /* lazy eval */
    void eval(int k) {
        if (lazy[k] == INF) return;  // 更新するものが無ければ終了
        if (k < n - 1) {             // 葉でなければ子に伝搬
            lazy[k * 2 + 1] = lazy[k];
            lazy[k * 2 + 2] = lazy[k];
        }
        // 自身を更新
        dat[k] = lazy[k];
        lazy[k] = INF;
    }
    void update(int a, int b, T x, int k, int l, int r) {
        eval(k);
        if (a <= l && r <= b) {  // 完全に内側の時
            lazy[k] = x;
            eval(k);
        } else if (a < r && l < b) {                     // 一部区間が被る時
            update(a, b, x, k * 2 + 1, l, (l + r) / 2);  // 左の子
            update(a, b, x, k * 2 + 2, (l + r) / 2, r);  // 右の子
            dat[k] = min(dat[k * 2 + 1], dat[k * 2 + 2]);
        }
    }
    void update(int a, int b, T x) { update(a, b, x, 0, 0, n); }
    T query_sub(int a, int b, int k, int l, int r) {
        eval(k);
        if (r <= a || b <= l) {  // 完全に外側の時
            return INF;
        } else if (a <= l && r <= b) {  // 完全に内側の時
            return dat[k];
        } else {  // 一部区間が被る時
            T vl = query_sub(a, b, k * 2 + 1, l, (l + r) / 2);
            T vr = query_sub(a, b, k * 2 + 2, (l + r) / 2, r);
            return min(vl, vr);
        }
    }
    T query(int a, int b) { return query_sub(a, b, 0, 0, n); }
    /* debug */
    inline T operator[](int a) { return query(a, a + 1); }
    void print() {
        for (int i = 0; i < 2 * n - 1; ++i) {
            cout << (*this)[i];
            if (i != n) cout << ",";
        }
        cout << endl;
    }
};

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,Q;
  string S;
  cin>>N>>Q>>S;
  RMQ<int> A(N+1);
  A.update(0,1,0);
  int sum = 0;
  for(int i=0;i<(int)S.size();i++){
    if(S[i]=='(') sum++;
    else sum--;
    A.update(i+1,i+2,sum);
  }
  while(Q--){
    int t,l,r;
    cin>>t>>l>>r;
    l--;
    if(t==1){
      if(S[l]==S[r-1]) continue;
      else{
        if(S[l]=='('){
          int min = A.query(l,r);
          min-=2;
          A.update(l,r,min);
        }else{
          int min = A.query(l,r);
          min+=2;
          A.update(l,r,min);
        }
        swap(S[l],S[r-1]);
      }
    }else{
      if(A.query(l,l+1)==A.query(r,r+1)&&A.query(l,r)>=A.query(l,l+1)) cout<<"Yes\n";
      else cout<<"No\n";
    }
  }

}
