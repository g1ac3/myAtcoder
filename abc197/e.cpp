#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  ll n;
  cin>>n;
  vector<vector<ll>> a(n);

  for(int i=0;i<n;i++){
    ll x,c;
    cin>>x>>c;
    a[c].emplace_back(x);
  }
  for(int i=0;i<n;i++) sort(a[i].begin(),a[i].end());
  ll time = 0;
  ll now = 0;
  for(vector<ll> v : a){
    int s = v.size();
    if(s == 0) continue;
    if(v[0]>=now){
      for(ll x : v){
        time += fabs(now-x);
        cout<< time <<" ";
        now = x;
      }
    }else if(now>v[s-1]){
      for(int i=s-1;i>=0;i--){
        time += fabs(now-v[i]);
        cout<< time <<" ";
        now = v[i];
      }
    }else if(fabs(now-v[0])<fabs(now-v[s-1])){
      int mem;
      for(int i=0;i<s;i++){
        if(now < v[i]){
          mem = i;
          break;
        }
      }
      for(int i=mem-1;i>=0;i--){
        time += fabs(now-v[i]);
        cout<< time <<" ";
        now = v[i];
      }
      for(int i=mem;i<s;i++){
        time += fabs(now-v[i]);
        cout<< time <<" ";
        now = v[i];
      }
    }else{
      int mem;
      for(int i=s-1;i>=0;i--){
        if(now > v[i]){
          mem = i;
          break;
        }
      }
      for(int i=mem+1;i<s;i++){
        time += fabs(now-v[i]);
        cout<< time <<" ";
        now = v[i];
      }
      for(int i=mem;i>=0;i--){
        time += fabs(now-v[i]);
        cout<< time <<" ";
        now = v[i];
      }
    }
  }
  time += fabs(now-0);
  cout<< time <<" ";
  now = 0;
  cout<<time;
}
