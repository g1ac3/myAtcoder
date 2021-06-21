#include<iostream>
#include<string>
int ctoi(char c){
  return c-'0';
}
int mypow(const int a,const int b){
  int ans = a;
  for(int i=1;i<b;i++) ans*=a;
  return ans;
}
int countCi(const std::string s,const int k,const int l){
  int cnt = 0;
  for(int i=0;i<l;i++){
    if(ctoi(s[i]) == k) cnt++;
  }
  //std::cout<<cnt<<" ";
  return cnt;
}
int ScoreCalc(const std::string s,const int sharp){
  int ans = 0;
  for(int i=1;i<10;i++){
    if(i == sharp) ans += i*mypow(10,countCi(s,i,4)+1);
    else ans += i*mypow(10,countCi(s,i,4));
    //std::cout<<ans<<"\n";
  }
  //std::cout<<ans<<" ";
  return ans;
}
void Calc(const int c[],const std::string s,const std::string j){
  int win=0;
  int game=0;
  for(int i=0;i<9;i++){
    for(int p=0;p<c[i];p++){
      for(int k=0;k<9;k++){
        //std::cout<<i+1<<" "<<k+1<<"\n";
        if(i == k){
          for(int q=0;q<c[k]-1;q++){
            if(ScoreCalc(s,i+1)-ScoreCalc(j,k+1) > 0){
              win++;
              //std::cout<<" win";
            }
            game++;
            //std::cout<<"\n";
          }
        }else{
          for(int q=0;q<c[k];q++){
            if(ScoreCalc(s,i+i)-ScoreCalc(j,k+1) > 0){
              win++;
              //std::cout<<" win";
            }
            game++;
            //std::cout<<"\n";
          }
        }
      }
    }
  }
  std::cout<<win/(game*1.0);
}
void CountHand(int c[9],const std::string s){
  for(int i=0;i<4;i++) c[ctoi(s[i])-1]--;
}
void CountCards(int c[9],const int k){
  for(int i=0;i<9;i++) c[i] = k;
}
int main(){
  int k;
  int cards[9];
  std::string s,j;
  std::cin>>k>>s>>j;
  CountCards(cards,k);
  CountHand(cards,s);
  CountHand(cards,j);
  //for(int i=0;i<9;i++) std::cout<<cards[i]<<" ";
  Calc(cards,s,j);
  return 0;
}
