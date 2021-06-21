#include <iostream>

int main(){
  int n,m,q;
  std::cin>>n;
  int64_t xy[n][2];
  for(int i=0;i<n;i++) std::cin>>xy[i][0]>>xy[i][1];
  std::cin>>m;
  int64_t op[m][2] = {0};
  for(int i=0;i<m;i++){
    std::cin>>op[i][0];
    if(op[i][0] > 2) std::cin>>op[i][1];
  }
  std::cin>>q;
  int ab[q][2];
  for(int i=0;i<q;i++) std::cin>>ab[i][0]>>ab[i][1];

  for(int i=0;i<m;i++){



  }
}
