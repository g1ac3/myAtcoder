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
  return cnt;
}
int ScoreCalc(const std::string s,const int sharp){
  int ans = 0;
  int tmp;
  for(int i=1;i<10;i++){
    tmp  =countCi(s,i,4);
    if(i == sharp) ans += i*mypow(10,tmp+1);
    else if(tmp == 0) ans += i;
    else ans += i*mypow(10,tmp);
  }
  return ans;
}
void Calc(const int c[],const std::string s,const std::string j){
  double win=0;
  double game=0;
  for(int i=0;i<9;i++){
    for(int k=0;k<9;k++){
      int t_win =0;
      int t_game=0;
      t_game += (double)(c[k]);
      if(ScoreCalc(s,i+1) > ScoreCalc(j,k+1)){
        t_win += c[k];
        if(i==k && t_game > 0){
          t_win--;
          t_game--;
        }
      }else if(i==k && t_game > 0){
        t_game--;
      }
      win += t_win*c[i];
      game += t_game*c[i];
    }
  }
  std::cout<<win/game;
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
  Calc(cards,s,j);
  return 0;
}
