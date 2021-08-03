#include <iostream>
#include <string>

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int testcases;
	std::cin >> testcases;
	int n,m;
	std::string s;
	
	for(int test=0; test<testcases; test++){
		std::cin >> n >> m;

		std::cin >> s;
		
		std::string ans = s;

		for (int i = 0; i < m; i++){
			for (int i = 0; i < n; i++){
				if((s[i-1] == '1') ^ (s[i+1] == '1')){
					ans[i] = '1';
				}
			}
			if (ans == s) {
				break;
			}
			s = ans;
		}
		std::cout << ans << "\n";
	}//testcases
		
	return 0;
}//main
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
