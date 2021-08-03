#include <iostream>

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	std::cin >> t;
	std::string s;
	int n;
	for (int testcases = 0; testcases < t; testcases++){
		bool answer = true;
		std::cin >> n;
		std::cin >> s;
		
		for (char c = 'A'; c <= 'Z'; c++){
			int first = n;
			int last = -1;

			for (int i = 0; i < n; i++){
				if(s[i] == c){
					first = std::min(first, i);
					last = std::max(last, i);
				}
			}

			for (int i = first; i <= last; i++){
				if (s[i] != c) {
					answer = false;
					break;
				}
			}
		}

		if (answer) {
			std::cout << "YES" << "\n";
		}
		else {
			std::cout << "NO" << "\n";
		}
	}
	
	return 0;
}//main
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
