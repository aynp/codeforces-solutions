#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int testcases;
	std::cin >> testcases;
	
	for(int test=0; test<testcases; test++){
		int n;
		std::cin >> n;
		std::vector<int> v(n);

		for (int i = 0; i < n; i++){
			std::cin >> v[i];
		}
		std::sort(v.begin(), v.end());

		int smollest_gap = 1000000000;
		int zero_pos = 0;	//Zero or positive
		for (int i = 1; i < n; ++i) {
			if (std::abs(v[i]-v[i-1]) < smollest_gap) {
				smollest_gap = std::abs(v[i]-v[i-1]);
			}
			if (v[i] >= 0) {
				zero_pos = i;
				break;
			}
		}

		// for(auto x : v) {
		// 	std::cout << x << " ";
		// } std::cout << "\n" << smollest_gap;



		if (v[zero_pos] > 0) {
			if (smollest_gap >= v[zero_pos]) {
				std::cout << zero_pos+1 << "\n";
			} else {
				std::cout << zero_pos << "\n";
			}
		} else {
			if (smollest_gap >= v[zero_pos+1]) {
				std::cout << zero_pos+2 << "\n";
			} else {
				std::cout << zero_pos+1 << "\n";
			}
		}
		
	}//testcases
		
	return 0;
}//main

/*
More than 1 positive -> NO

All negative/0 -> YES
*/
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
