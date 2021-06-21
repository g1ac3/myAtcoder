#include <iostream>
#include <unordered_set>

int main(){
  int n;
  std::cin>>n;
  std::unordered_set<std::string> st,st2;
  for(int i=0;i<n;i++){
    std::string tmp;
    std::cin>>tmp;
    if(tmp[0] == '!'){
      tmp = tmp.substr(1);
      if(st.count(tmp)>0){
        std::cout<<tmp;
        return 0;
      }else{
        st2.insert(tmp);
      }
    }else{
      if(st2.count(tmp)>0){
        std::cout<<tmp;
        return 0;
      }else{
        st.insert(tmp);
      }
    }
  }
  std::cout<<"satisfiable";
}
//20:00
