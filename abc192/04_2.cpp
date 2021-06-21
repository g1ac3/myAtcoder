#include <iostream>
#include <vector>
int Mse(std::string x){
  int max = 0;
  for(int c : x){
    int cnum = c-'0';
    if(max < cnum) max = cnum;
  }
  return max;
}
bool MyCheck(std::string x,int64_t m,int n){
  std::vector<int> y;
  // std::cout<<n<<"--------\n";
  while(m > 0){
    y.push_back(m%n);
    m/=n;
  }
  int xl = x.length();
  int yl = y.size();
  // std::cout<<xl<<" x y "<<yl<<"\n";
  if(xl < yl) return true;
  else if(xl > yl) return false;
  else{
    for(int c : x){
      int cnum = c-'0';
      yl--;
      // std::cout<<"  "<<cnum<<" "<<y[yl]<<"\n";
      if(cnum < y[yl]) return true;
      else if(cnum > y[yl]) return false;
    }
  }
  return true;
}
int main(){
  std::string x;
  int64_t m;
  std::cin>>x>>m;
  if(x.length() == 1){
    std::cout<<(stoll(x) > m ? "0" : "1");
    return 0;
  }
  int d = Mse(x) + 1;
  //std::cout<<d<<"\n";
  int cnt=0;
  while(MyCheck(x,m,d+cnt)) cnt++;
  std::cout<<cnt;
  return 0;
}
