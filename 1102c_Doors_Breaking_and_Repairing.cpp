//DONE
#include <iostream>
#include <cmath>

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int n, x, y;
	std::cin >> n >> x >> y;
	int a[n];

	if (x > y) {
		std::cout << n;
		return 0;
	}
	double count = 0;
	for (int i = 0; i < n; i++){
		std::cin >> a[i];
		if (a[i] <= x) {
			count++;
		}
	}
	std::cout << std::ceil(count/2) << "\n";
	return 0;
}//main
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
