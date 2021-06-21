#include <bits/stdc++.h>
using namespace std;
int main(){
  string S;
  cin>>S;
  vector<int> a(S.size());
  for(int i=0;i<(int)S.size();i++) a[i] = (int)(S[i]-'0')%3;
  int sum = 0;
  vector<int> a_cnt(3);
  for(int x:a){
    sum += x;
    a_cnt[x]++;
  }
  sum %= 3;
  if(sum == 0){
    cout<<"0";
    return 0;
  }else if(sum == 1){
    if(a_cnt[1] > 0 && S.size()>1){
      cout<<"1";
      return 0;
    }else if(a_cnt[2] > 1 && S.size()>2){
      cout<<"2";
      return 0;
    }
  }else{
    if(a_cnt[2] > 0 && S.size()>1){
      cout<<"1";
      return 0;
    }else if(a_cnt[1] > 1 && S.size()>2){
      cout<<"2";
      return 0;
    }
  }
  cout<<"-1";
}
