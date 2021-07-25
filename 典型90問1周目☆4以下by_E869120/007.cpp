#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main(){
  int N,Q;
  cin>>N;
  vector<int> A(N);
  for(int i=0;i<N;i++) cin>>A[i];
  sort(A.begin(),A.end());
  vector<int> ans;
  cin>>Q;
  while(Q--){
    int b;
    int c = N/2;
    cin>>b;
    int tmp = abs(b-A[c]);
    if(N==1){
      ans.emplace_back(tmp);
      continue;
    }
    int tmpr = abs(b-A[c+1]);
    if(N==2){
      if(tmp<tmpr) ans.emplace_back(tmp);
      else ans.emplace_back(tmpr);
      continue;
    }
    int tmpl = abs(b-A[c-1]);
    if(tmpl>tmp&&tmp<tmpr){
      ans.emplace_back(tmp);
      continue;
    }else if(tmpl<tmp){
      for(int i=c-1;i>=0;i--){
        if(i == 0) ans.emplace_back(abs(b-A[0]));
        else{
          if(abs(b-A[i-1])<tmpl){
            tmpl = abs(b-A[i-1]);
            continue;
          }
          ans.emplace_back(tmpl);
          i = -1;
        }
      }
    }else if(tmpr<tmp){
      for(int i=c+1;i<N;i++){
        if(i == N-1)ans.emplace_back(abs(b-A[N-1]));
        else{
          if(abs(b-A[i+1])<tmpr){
            tmpr = abs(b-A[i+1]);
            continue;
          }
          ans.emplace_back(tmpr);
          i = N;
        }
      }
    }
  }
  for(int x:ans)cout<<x<<"\n";
}
