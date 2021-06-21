#include <iostream>
#include <cmath>
#define N 10

void swap(int *a,int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
int high(int x){
  int a[N];
  int i=0;
  int ans = 0;
  while(x != 0){
    a[i++] = x%10;
    x/=10;
  }
  for(int j=0;j<i-1;j++){
    for(int k=j+1;k<i;k++){
      if(a[j] > a[k]) swap(&a[j],&a[k]);
    }
  }
  for(int j=0;j<i;j++){
    ans += a[j]*pow(10,j);
  }
  return ans;
}
int low(int x){
  int a[N];
  int i=0;
  int ans = 0;
  while(x != 0){
    a[i++] = x%10;
    x/=10;
  }
  for(int j=0;j<i-1;j++){
    for(int k=j+1;k<i;k++){
      if(a[j] < a[k]) swap(&a[j],&a[k]);
    }
  }
  for(int j=0;j<i;j++){
    ans += a[j]*pow(10,j);
  }
  return ans;
}
int main(){
  int n,k;
  std::cin>>n>>k;
  for(int i=0;i<k;i++) n = high(n)-low(n);
  std::cout<<n;
  return 0;
}
