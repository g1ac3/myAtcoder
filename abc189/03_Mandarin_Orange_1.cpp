#include <iostream>
#include <vector>
int mysolve(std::vector<int> a,int n){
  int max = 0;
  for(int i=0;i<n;i++){
    int sum = 0;
    int min = a[i];
    sum += a[i];
    int l = i,r = i;
    while(l > 0 && a[l-1] >= min){
      l--;
      sum += min;
    }
    while(r < n-1 && a[r+1] >= min){
      r++;
      sum += min;
    }
    max = std::max(sum,max);
    //std::cout<<l<<" "<<r<<" "<<sum<<"\n";
  }
  return max;
}
int main(){
  int n;
  std::cin>>n;
  std::vector<int> a(n);
  for(int i=0;i<n;i++) std::cin>>a[i];

  std::cout<<mysolve(a,n);
}
