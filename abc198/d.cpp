#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
  unordered_set<char> a;
  string S[3];
  string N[3];
  ll M[3];
  for(int i=0;i<3;i++) cin>>S[i];
  for(int i=0;i<3;i++) N[i] += S[i];
  for(int i=0;i<3;i++){
    for(int j=0;j<S[i].size();j++){
      a.insert(S[i][j]);
    }
  }
  int n = a.size();
  if(n>10){
    cout<<"UNSOLVABLE";
    return 0;
  }
  vector<int> menu(10);
  for(int i=0;i<10;i++) menu[i] = i;
  //for(int i=0;i<3;i++) cout<<N[i]<<"\n";
  //for(char x:a) cout<<x<<" ";
  char b[n];
  int tmp_cnt = 0;
  for(char x:a) b[tmp_cnt++] = x;
  //for(int i=0;i<n;i++) cout<<b[i]<<" ";
  do{
    for(int i=0;i<n;i++){
      for(int j=0;j<3;j++){
        for(int k=0;k<S[j].size();k++){
          if(b[i] == S[j][k]) N[j][k] = menu[i] + '0';
        }
      }
    }
    //for(int j=0;j<3;j++) cout<<N[j]<<"\n";
    if(N[0][0] == '0') continue;
    if(N[1][0] == '0') continue;
    if(N[2][0] == '0') continue;
    for(int i=0;i<3;i++){
      M[i] = atoll(N[i].c_str());
    }
    if(M[0]+M[1] == M[2]){
      printf("%lld\n%lld\n%lld",M[0],M[1],M[2]);
      return 0;
    }
  }while(next_permutation(menu.begin(),menu.end()));
  cout<<"UNSOLVABLE";
  return 0;
}
