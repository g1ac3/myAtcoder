#include<iostream>
#include<string>
int main(){
  std::string s;
  std::cin>>s;
  for(int i=0;i<s.length();i++){
    if((i+1)%2 == 1 && (s[i]<'a' || 'z'<s[i])){
      std::cout<<"No";
      return 0;
    }else if((i+1)%2 == 0 && (s[i]<'A' || 'Z'<s[i])){
      std::cout<<"No";
      return 0;
    }
  }
  std::cout<<"Yes";
  return 0;
}
