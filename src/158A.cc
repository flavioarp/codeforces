#include <iostream>

int main(){
  int n,k,i;
  std::cin>>n>>k;
  int ans = 0;
  k--;
  int prev = 0;
  while(n--){
    std::cin>>i;
    if(i>0){
      if(k<0 && prev>i) break;
      ans++;
      prev = i;
      k--;
    }
    else break;
  }
  if(!prev) ans = 0;
  std::cout<<ans<<std::endl;
  return 0;
}
