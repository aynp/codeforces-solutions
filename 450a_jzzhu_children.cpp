#include <iostream>
#include <cmath>

int main(){
	std::ios::sync_with_stdio(false);
	
	int n, m;
	std::cin >> n >> m;
	
	int input, largest_turns = 0, largest_c;

	for (int i = 0; i < n; i++){

		std::cin >> input;

		if (std::ceil((double)input/m) >= largest_turns) {
			largest_turns = std::ceil((double)input/m) ;
			largest_c = i+1;
		}
	}

	std::cout << largest_c << "\n";
	return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
