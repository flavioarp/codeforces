#include <iostream>

int main(){
	std::string s;
	int a, n;
	std::cin>>a;

	while(a--){
		std::cin>>s;
		n = s.length();
		if(n>10) std::cout<<s[0]<<n-2<<s[n-1]<<std::endl;
		else std::cout<<s<<std::endl;
	}
	return 0;
}
