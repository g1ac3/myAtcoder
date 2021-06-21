#include <iostream>
bool bpp(int b[],int k){
  int d = k-1;
  while(d >= 0){
    if(b[d] == 0){
      b[d]++;
      return true;
    }
    b[d] = 0;
    d--;
  }
  return false;
}
bool check(int a,int e[],int k){
  for(int i=0;i<k;i++){
    if(a == e[i]) return true;
  }
  return false;
}
int calc(int a[][2],int e[],int m,int k){
  int sum = 0;
  for(int i=0;i<m;i++){
    if(check(a[i][0],e,k)&&check(a[i][1],e,k)) sum++;
  }
  return sum;
}
int main(){
  int n,m,k;
  std::cin>>n>>m;
  int a[m][2];
  for(int i=0;i<m;i++){
    std::cin>>a[i][0]>>a[i][1];
  }
  std::cin>>k;
  int c[k][2];
  for(int i=0;i<k;i++){
    std::cin>>c[i][0]>>c[i][1];
  }

  int b[k]={0};
  int e[k];
  int ans = 0;
  do{
    for(int i=0;i<k;i++) e[i] = c[i][b[i]];
    int tmp = calc(a,e,m,k);
    if(tmp > ans) ans = tmp;
  }while(bpp(b,k));
  std::cout<<ans;
  return 0;

}
