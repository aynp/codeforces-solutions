#include <iostream>
#include <algorithm>
#include <cmath>

bool check(long long r, long long g, long long b, long long w) {

	if ((r&1) + (g&1) + (b&1) + (w&1) <= 1) {		//if one is odd the it will be in centre or else all are even thd therefore the sum will also be even
		return true;
	}
	if (r && g && b) {
		r--;
		g--;
		b--;
		w+=3;

		if ((r&1) + (g&1) + (b&1) + (w&1) <= 1) {
		return true;
		}
	}
	return false;
}

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	long long r, g, b, w;

	std::cin >> t;
	
	for (int testcases = 0; testcases < t; testcases++){
		std::cin >> r >> g >> b >> w;
		if (check(r,g,b,w)) {
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
