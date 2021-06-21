#include <iostream>
#include <vector>
bool myby(int a[],int n){
  for(int i=0;i<n;i++){
    if(a[i] == 0){
      a[i]++;
      return true;
    }else{
      a[i] = 0;
    }
  }
  return false;
}
int main(){
  int n;
  std::cin>>n;
  std::vector<std::string> s(n);
  for(int i=0;i<n;i++) std::cin>>s[i];

  int a[n+1] = {0};
  int y;
  int sum=0;
  do{
    //for(int i=0;i<n+1;i++) std::cout<<a[i]<<" ";
    //std::cout<<"\n";
    y = a[0];
    //std::cout<<y<<" ";
    for(int i=0;i<n;i++){
      if(s[i]=="AND") y = y*a[i+1];
      else y = y+a[i+1];
      //std::cout<<y<<" ";
    }
    if(y > 0 ) sum++;
    //if(y == 1) std::cout<<"a";
    //std::cout<<"\n--------------\n";
  }while(myby(a,n+1));
  std::cout<<sum;
}
