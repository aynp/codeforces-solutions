//DONE - 2 WAYS

#include <iostream>

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int testcases;
	std::cin >> testcases;
	
	for(int test=0; test<testcases; test++){
		long long int n;
		std::cin >> n;

		long long x = 2050;
		int cnt = 0;

		while(n/x){
			x = x*10;
			cnt++;
		}
		x = x/10;
		int count = 0;

		for (; cnt > 0; cnt--) {
			count = count + n/x;
			n = n%x;
			x = x/10;
		}
		if (n%2050 == 0) {
			std::cout << count << "\n";
		} else {
			std::cout << -1 << "\n";
		}		
	}//testcases
		
	return 0;
}//main

// #include <iostream>

// int main(){
// 	std::ios::sync_with_stdio(false);
	
// 	int testcases;
// 	std::cin >> testcases;
	
// 	for(int test=0; test<testcases; test++){
// 		long long n,x;
// 		std::cin >> n;
// 		x = n/2050;

// 		if (x*2050 != n){
// 			std::cout << -1 << "\n";
// 			continue;
// 		}
// 		int count = 0;
// 		std::string y = std::to_string(x);

// 		for(auto i : y){
// 			count = count + i -48;
// 		}
// 		std::cout << count << "\n";

// 	}//testcases
		
// 	return 0;
// }//main
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
