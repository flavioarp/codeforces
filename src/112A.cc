#include <iostream>
#include <string>

int _lexcmp(std::string s1, std::string s2){
  int k;
  int t = s1.length();

  for(k = 0; k < t; k++){
    if(std::tolower(s1[k])!=std::tolower(s2[k])) break;
  }

  if(k==t) return 0;
  if(std::tolower(s1[k])<std::tolower(s2[k])) return -1;
  else return 1;
}

int main(){
  std::string s1,s2;
  std::cin>>s1>>s2;
  std::cout<<_lexcmp(s1,s2)<<std::endl;
  return 0;
}
