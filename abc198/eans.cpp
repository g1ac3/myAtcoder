#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
int N;
vector<int> C;
vector<vector<int>> P;
vector<int> A;
vector<int> Ccnt;

void def(int i,int f){
  if(Ccnt[C[i]] == 0) A.emplace_back(i+1);
  Ccnt[C[i]]++;
  for(int x : P[i]){
    if(x == f) continue;
    def(x,i);
  }
  Ccnt[C[i]]--;
}
int main(){
  cin>>N;
  C.resize(N);
  P.resize(N);
  Ccnt.resize(100001);
  for(int &x :C) cin>>x;
  for(int i=0;i<N-1;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    P[a].emplace_back(b);
    P[b].emplace_back(a);
  }
  def(0,-1);
  sort(A.begin(),A.end());
  for(int x:A) cout<<x<<"\n";
}
