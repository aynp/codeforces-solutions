#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	std::ios::sync_with_stdio(false);
	
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	
	for (int i = 0; i < n; i++){
		std::cin >> a[i];
	}

	std::sort(a.begin(), a.end());

	
	
	return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
