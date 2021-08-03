//DONE
#include <iostream>

int main(){
	std::ios::sync_with_stdio(false);
	
	long long n;
	std::cin >> n;
	n = (n*n + n)/2;
	if ((n&1) == 1) {
		std::cout << 1 << "\n";
	} else {
		std::cout << 0 << "\n";
	}	
	return 0;
}//main


// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
