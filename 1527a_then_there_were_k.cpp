#include <bits/stdc++.h>

int main(){
	std::ios::sync_with_stdio(false);
	
	int testcases;
	std::cin >> testcases;
	
	for(int test=0; test<testcases; test++){
		int n, value;
		std::cin >> n;

		for (int i = 2;; i=i*2){
			if (i>n) {
				value = i;
				break;
			}
		}

		std::cout << value/2 - 1 << "\n";
		
	}//testcases
		
	return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
