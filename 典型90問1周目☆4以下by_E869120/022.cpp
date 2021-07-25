#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  ll A,B,C;
  cin>>A>>B>>C;
  ll m = __gcd(__gcd(A,B),C);
  cout<<(A/m)+(B/m)+(C/m)-3;
}
