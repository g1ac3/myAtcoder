#include<iostream>
#define rep(i,n) for(int i=0;i<n;i++)

int ctoi(char c){
  return c-'0';
}
int mypow(const int a,const int b){
  int ans = 1;
  rep(i,b) ans *= a;
  return ans;
}
int Mse(std::string x){
  int max = 0;
  for(int c : x){
    int cnum = c-'0';
    if(max < cnum) max = cnum;
  }
  return max;
}
int64_t calc(std::string x,int64_t n){
  int64_t j = x.length()-1;
  int64_t sum = 0;
  for(int c : x){
    sum += ctoi(c)*mypow(n,j);
    //std::cout<<i<<" isum "<<sum<<" x[i]:"<<ctoi(x[i])<<" n:"<<n<<" j:"<<j<<" pow(n,j):"<<pow(n,j)<<"\n";
    j--;
  }
  return sum;
}
int main(){
  std::string x;
  int64_t m;
  int64_t d;
  std::cin>>x;
  std::cin>>m;
  d = Mse(x) + 1;
  //std::cout<<d<<"\n";
  int64_t i=0;
  //while(m >= calc(x,d+i)) i++;
  std::cout<<i;
  return 0;
}
