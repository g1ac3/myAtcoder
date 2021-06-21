#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B;
  cin>>A>>B;
  int MAX = 1;
  for(int i = 1;i<B+1;i++)if(i*(B/i-1)>=A)MAX=i;
  cout<<MAX;
}
