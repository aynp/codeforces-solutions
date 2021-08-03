#include <iostream>

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	std::cin >> t;

	int n, k;
	for (int i = 0; i < t; ++i)
	{
		std::cin >> n >> k;
		int temp = (k-1)/(n-1);
		temp = temp*n + k- temp*(n-1);
		std::cout << temp << "\n";
		
	}
	
	return 0;
}//main
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
