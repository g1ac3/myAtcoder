#include <iostream>

int main(){
  int n;
  std::cin>>n;
  int ab[n][2];
  int min = 1001001001;
  for(int i=0;i<n;i++) std::cin>>ab[i][0]>>ab[i][1];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i == j){
        if(ab[i][0]+ab[i][1] < min) min = ab[i][0]+ab[i][1];
      }else{
        if(std::max(ab[i][0],ab[j][1]) < min) min = std::max(ab[i][0],ab[j][1]);
      }
    }
  }
  std::cout<<min;
  return 0;
}
