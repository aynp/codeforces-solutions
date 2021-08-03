//DONE

#include <iostream>

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int testcases;
	std::cin >> testcases;
	
	for(int test=0; test<testcases; test++){
		int n;
		bool isAccending = true;
		std::cin >> n;
		int a[n];
		int min = 51, max = 0;

		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
			if (a[i] > max) {
				max = a[i];
			}
			if (a[i] < min) {
				min = a[i];
			}
		}
		for (int i = 0; i < n-1; i++){
			if (a[i] > a[i+1]) {
				isAccending = false;
			}
		}

		if (isAccending) {
			std::cout << 0 << "\n";
		} else {
			if (min == a[0] || max == a[n-1]) {
				std::cout << 1 << "\n";
			}
			else {
				if (a[0]==max && a[n-1]==min) {
					std::cout << 3 << "\n";
				}else{
					std::cout << 2 << "\n";
				}
			}
		}

		
	}//testcases
		
	return 0;
}//main
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
