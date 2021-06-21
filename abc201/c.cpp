#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
  string S;
  cin>>S;
  int a=0,b=0,c=0;
  for(int i=0;i<10;i++){
    if(S[i] == 'o') a++;
    else if(S[i] == '?') b++;
    else c++;
  }
  if(a>4){
    cout<<"0";
    return 0;
  }
  int sum = 1;
  for(int i=1;i<=a;i++){
    sum*=i;
  }
  cout<<sum;
}
