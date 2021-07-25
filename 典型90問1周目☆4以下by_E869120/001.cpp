#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
vector<int> a;
int n,k;
int calc(int l,int r){
  if(l>r) return r;
  int sp = l + ceil((r-l)/2);
  //printf("%d %d %d\n",l,r,sp);
  int c = k;
  int i = 0;
  while(c>=0){
    int sp_t = sp;
    //printf("--%d %d\n",c,sp_t);
    while(sp_t>0){
      //printf("----%d %d\n",i,sp_t);
      if(i>=n) return calc(l,sp-1);
      sp_t-=a[i++];
    }
    c--;
  }
  if(r==l+1) return calc(sp+1,r);
  if(l != r) return calc(sp,r);
  return sp;
}
int main(){
  int l;
  cin>>n>>l>>k;
  a.resize(n);
  int tmp = 0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    a[i] -= tmp;
    tmp += a[i];
  }
  a.emplace_back(l-tmp);
  n++;
  //for(int x:a) cout<<x<<" ";
  //cout<<"\n";
  cout<<calc(0,l);
}
