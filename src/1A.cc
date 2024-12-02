#include <bits/stdc++.h>

int main(){
  double n, m, a;
  std::cin>>n>>m>>a;
  std::cout<<std::fixed<<std::setprecision(0)<<std::ceil(n/a)*std::ceil(m/a);
}

