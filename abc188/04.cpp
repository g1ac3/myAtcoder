#include <iostream>
#include <unordered_set>

static const int64_t INF = 1001001001;

int64_t snext(int k,int64_t abc[][3],int N){
  int64_t ans = abc[k][1];
  for(int i=0;i<N;i++){
    if(abc[i][1] < ans) ans = abc[i][1];
  }
  return ans;
}
int main(){
  int N;
  int64_t C;
  int64_t ans=0;
  std::cin>>N>>C;
  int64_t abc[N][3];
  for(int i=0;i<N;i++) std::cin>>abc[i][0]>>abc[i][1]>>abc[i][2];
  for(int i=0;i<N-1;i++){
    for(int j=i+1;j<N;j++){
      if(abc[i][0] > abc[j][0]) std::swap(abc[i],abc[j]);
    }
  }
  int64_t bmax=0,bmin=INF,bmax_num,bmin_num;
  for(int i=0;i<N;i++){
    if(abc[i][1] > bmax){
      bmax = abc[i][1];
      bmax_num = i;
    }
    if(abc[i][1] < bmin){
      bmin = abc[i][1];
      bmin_num = i;
    }
  }
  int64_t now_time=abc[0][0];
  int64_t sum = abc[0][2];
  /*
  do{
    next_time = snext(i,abc,N);
    if()
    ans += std::min(sum,C)*(abc[i][0]-now_time);
    now_time = abc[i][0];
    sum += abc[i][2];
  }while(bmax > now_time);
*/
  for(int i=1;i<N;i++){
    while(abc[i][0] > bmin){
      ans += std::min(sum,C)*((bmin+1)-now_time);
      now_time = bmin+1;
      sum -= abc[bmin_num][2];
      int64_t tmp=INF;
      int64_t tmp_num;
      for(int j=0;j<N;j++){
        if(abc[i][1] >= bmin && tmp > abc[i][1]){
          tmp = abc[i][1];
          tmp_num = i;
        }
      }
      bmin = tmp;
      bmin_num = tmp_num;
    }
    ans += std::min(sum,C)*(abc[i][0]-now_time);
    now_time = abc[i][0];
    sum += abc[i][2];
  }













/*

  std::cout<<"------------------\n";
  for(int i=0;i<N;i++){
    printf("%lld %lld %lld\n",abc[i][0],abc[i][1],abc[i][2]);
  }
  std::unordered_set<int64_t> s;
  now_time = abc[0][0];
  next_end_time = abc[0][1];
  next_end_num = 0;
  s.insert(0);
  for(int i=1;i<N;i++){
    int64_t sum = 0;
    if(abc[i][0] > next_end_time){
      for(int64_t x:s) sum += abc[x][2];
      ans += std::min(sum,C)*(next_end_time-now_time+1);
      s.erase(next_end_num);
      now_time = abc[i][0];
    }else{
      for(int64_t x:s) sum += abc[x][2];
      ans += std::min(sum,C)*(abc[i][0]-now_time);
      now_time = abc[i][0];
    }
    now_time = abc[i][0];
    next_end_time = abc[i][1];
    s.insert(i);
  }
  int64_t sum = abc[0][2];
  for(int i=1;i<N;i++){
    while(abc[i][0] > next_end_time && ){
      ans += std::min(sum,C)*(next_end_time-now_time+1);
      sum -= abc[next_end_num][2];
      now_time = abc[next_end_num][1] + 1;
    }
    ans += std::min(sum,C)*(abc[i][0]-now_time);
    now_time = abc[i][0];
    sum += abc[i][2];

    now_time = abc[i][0];
    next_end_time = abc[i][1];
    s.insert(i);
  }
  std::cout<<ans;
  */
}
