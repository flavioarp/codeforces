#include <bits/stdc++.h>

int main(){
  int n;
  std::cin>>n;
  std::string in;
  int* p = (int*) calloc(n,sizeof(int));
 
  int sum = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 3; j++){
      std::cin>>in;
      sum += std::stoi(in); 
    }
    p[i] = sum;
    sum = 0;
  }

  int ans = 0;
  for(int t = 0; t < n; t++) if(p[t]>=2) ans++;
  std::cout<<ans;

  free(p);
  return 0;
}
