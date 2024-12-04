#include <iostream>

int main(){
  int n, d, a;
  d = 0;
  a = d;
  std::cin>>n;
  std::string s;
  std::cin>>s;
  
  std::string t;
  for(int i = 0; i < n; i++){
    t = {s[i]};
    if(!t.compare("D")) d++;
    else a++;
  }
  
  if(d>a) std::cout<<"Danik";
  else if(d<a) std::cout<<"Anton";
  else std::cout<<"Friendship";

  std::cout<<std::endl;

  return 0;
}
