#include <iostream>

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	std::cin >> t;
	int n, count;
	for (int i = 0; i < t; i++){
		count = 0;
		std::cin >> n;

		for (int pow = 1; pow <= n; pow = pow*10 + 1){
			for (int j = 1; j <= 9; j++){
				if (pow*j <= n) {
					count ++;
				}
			}
		}
		std::cout << count << "\n";
	}
	
	return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
