#include <iostream>
int main(){
  int64_t n;
  std::cin>>n;
  int sum=1;
  /*
  if(n == 1){
    std::cout<<"2";
    return 0;
  }
  if(n%2==0){
    for(int64_t i=3;i*i/2<n;i++){
      if(i%2==0 && (n-(i/2))%i==0) sum++;
      if(i%2==1 && n%i==0) sum++;
    }
  }else{
    sum++;
    for(int64_t i=3;i*i/2<n;i++){
      if(i%2==0 && (n-(i/2))%i==0) sum++;
      if(i%2==1 && n%i==0) sum++;
    }
  }
  */
  for(int64_t i=2;i*i/2<n;i++){
    if(i%2==0 && (n-(i/2))%i==0) sum++;
    if(i%2==1 && n%i==0) sum++;
  }
  std::cout<<sum*2;
  return 0;
}
