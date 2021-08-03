#include <iostream>
#include <string>

int main(){
	std::ios::sync_with_stdio(false);
	
	int n, count = 0;
	std::string a;
	std::cin >> n >> a;

	for (int i = 0; i < n-1; i++){
		if (a[i] == a[i+1]) {
			count++;
		}
	}
	std::cout << count << "\n";
	
	return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
