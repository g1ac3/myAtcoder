#include<iostream>
#include<cmath>
int mypow(const int a,const int b){
  int ans = a;
  for(int i=1;i<b;i++) ans*=a;
  return ans;
}
bool checkI(int n){
  int tmp;
  for(int i=2;i<=sqrt(n);i++){
    int j = 2;
    while((tmp = mypow(i,j)) <= n){
      //std::cout<<tmp<<"tmp n"<<n<<"\n";
      if(tmp == n) return false;
      j++;
    }
    j = 2;
  }
  return true;
}
int main(){
  int n;
  int cnt = 1;
  std::cin>>n;
  for(int i=2;i<=n;i++){
    //std::cout<<i<<"i ";
    if(checkI(i)) cnt++;
  }
  std::cout<<cnt;
  return 0;
}
