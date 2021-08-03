#include <iostream>

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	std::cin >> t;
	int n;

	for (int testcases = 0; testcases < t; testcases++){
		int odd = 0, even = 0;
		std::cin >> n;
		int a[n];

		for (int i = 0; i < n; i++){
			std::cin >> a[i];
			
			if ((i&1) && (a[i]&1)==0) {		//i is odd
				odd ++;
			}
			if (((i&1)==0) && (a[i]&1)) {	//i is even
				even ++;
			}
		}
		if (even == odd) {
			std::cout << even << "\n";
		}
		else {
			std::cout << -1 << "\n";
		}
	}
	
	
	return 0;
}//main
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
