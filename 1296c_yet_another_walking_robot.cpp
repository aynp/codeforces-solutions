#include <iostream>
#include <string>

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	std::cin >> t;

	for (int testcase = 0; testcase < t; testcase++){

		int n, a=0, b=0;
		std::cin >> n;
		std::string inp;
		std::cin >> inp;
		for (int i = 0; i < inp.length()-1; i++){
			if (inp.substr(i,2) == "LR" || inp.substr(i,2) == "RL" || inp.substr(i,2) == "UD" || inp.substr(i,2) == "DU") {
				a = i+1;
				b = i+2;
				break;
			}
			if (inp.substr(i,4) == "LURD" || inp.substr(i,4) == "RULD" || inp.substr(i,4) == "LDRU" || inp.substr(i,4) == "RDLU" ||
				inp.substr(i,4) == "URDL" || inp.substr(i,4) == "ULDR" || inp.substr(i,4) == "DRUL" || inp.substr(i,4) == "DLUR") {
				a = i+1;
				b = i+4;
			}
		}
		if (a==0 && b==0) {
			std::cout << -1 << "\n";
		}
		else {
			std::cout << a << " " << b << "\n";
		}
	}
	
	return 0;
}//main

/*

L R
U D

LURD
LDRU

R

*/
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
