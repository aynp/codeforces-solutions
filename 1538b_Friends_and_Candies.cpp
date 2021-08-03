#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	std::ios::sync_with_stdio(false);
	
	int testcases;
	std::cin >> testcases;
	
	for(int test=0; test<testcases; test++){
		int n, count = 0;
		std::cin >> n;
		int a[n];
		long long sum = 0;
		for (int i = 0; i < n; i++){
			std::cin >> a[i];
			sum = sum + a[i];
		}
		if (sum%n != 0) {
			std::cout << -1 << "\n";
			continue;
		}
		int avg = sum/n;
		for (int i = 0; i < n; i++){
			if (a[i] > avg) {
				count++;
			}
		}
		std::cout << count << "\n";
		
	}//testcases

	return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
