#include <iostream>
#include <vector>

int main(){
  int n;
  std::cin>>n;
  int64_t ans=0;
  std::vector<int64_t> a(n);
  for(int i=0;i<n;i++){
    std::cin>>a[i];
    ans += a[i]*a[i];
  }
  ans *= (n-1);
  int sum = 0;
  for(int i=n-1;i>0;i--){
    sum += a[i];
    ans -= (2*a[i-1]*sum);
  }
  std::cout<<ans;
  return 0;
}
