#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  int l;
  cin>>l;
  l--;
  int cut = 11;
  if(l/2 < cut) cut = l-cut;
  ll ans = 1;
  for(int i=l;i>l-cut;i--) ans *= i;
  for(int i=2;i<=cut;i++) ans /= i;
  cout << ans;
}
