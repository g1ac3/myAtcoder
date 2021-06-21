#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int H,W,A,B;
vector<bool> used;
int def(int a,int b,int i){
  int cnt = 0;
  if(i==H*W) return 1;
  if(used[i]) return def(a,b,i+1);
  if(a>0 && !used[i+1] && (i+1)%W!=0){
    used[i] = true;
    used[i+1] = true;
    cnt += def(a-1,b,i+2);
    used[i] = false;
    used[i+1] = false;
  }
  // printf("%d %d %d %d\n",cnt,a,b,i);
  if(a>0 && !used[i+(W)] && (i/W)+1!=H ){
    used[i] = true;
    used[i+W] = true;
    cnt += def(a-1,b,i+1);
    used[i] = false;
    used[i+W] = false;
  }
  // printf("%d %d %d %d\n",cnt,a,b,i);
  if(b>0){
    used[i] = true;
    cnt += def(a,b-1,i+1);
    used[i] = false;
  }
  // printf("%d %d %d %d\n",cnt,a,b,i);
  return cnt;
}
int main(){
  cin>>H>>W>>A>>B;
  used.resize(H*W);
  cout<<def(A,B,0);
}
