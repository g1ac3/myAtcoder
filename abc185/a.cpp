#include <bits/stdc++.h>
using namespace std;
int main(){
  int MIN = INT_MAX;
  for(int i=0;i<4;i++){
    int tmp;
    cin>>tmp;
    MIN = min(MIN,tmp);
  }
  cout<<MIN;
}
