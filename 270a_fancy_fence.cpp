#include <iostream>
#include <cmath>

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	std::cin >> t;
	double a;
	for (int testcases = 0; testcases < t; testcases++){
		std::cin >> a;
		if (std::floor(360/(180-a)) == 360/(180-a)) {
			std::cout << "YES" << "\n";
		}
		else {
			std::cout << "NO" << "\n";
		}
	}
	
	
	return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
