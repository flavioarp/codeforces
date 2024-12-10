#include <string>
#include <iostream>
 
int main(){
  int n, x(0);
	char s[101];
	scanf("%d", &n);
  
  while(n--){
		scanf("%s",s);
		s[1] == '+' ? ++x : --x;
	}
  
	std::cout<<x<<std::endl;
	return 0;
}
