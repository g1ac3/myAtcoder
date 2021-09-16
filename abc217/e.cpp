#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
  int Q;
  cin>>Q;
  map<int,int> M;
  multiset<int> ms;
  queue<int> q;
  while(Q--){
    int a;
    cin>>a;
    if(a==1){
      int x;
      cin>>x;
      q.push(x);
    }else if(a==2){
      int ans = -1;
      while(ans<0&&0<ms.size()){
        auto it = ms.begin();
        if(M[(*it)]>0){
          M[(*it)]--;
          ans = (*it);
        }
        ms.erase(ms.begin());
      }
      if(ans<0){
        ans = q.front();
        M[ans]--;
        q.pop();
      }
      printf("ans :%d\n",ans);
      cout<<"ms : ";
      for(int x:ms) cout<<x<<" ";
      cout<<"\n";
      //cout<<ans<<endl;
    }else{
      while(q.size()){
        int tmp = q.front();
        ms.insert(tmp);
        M[tmp]++;
        q.pop();
      }
    }
  }
}
