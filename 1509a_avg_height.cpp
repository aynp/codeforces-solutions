#include <iostream>

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	std::cin >> t;
	
	for (int i = 0; i < t; i++){
		int n;
		std::cin >> n;

		int odd_count =0 , even_count = 0; 
		
		int student[n], arranged[n];

		for (int j = 0; j < n; j++){
			std::cin >> student[j];

			if (student[j]%2) {
				arranged[odd_count] = student[j];
				odd_count++;
			}
			else {
				even_count++;
				arranged[n-even_count] = student[j];
			}
		}

		for (int j = 0; j < n; j++){
			std::cout << arranged[j] << " ";
		}

		std::cout  << "\n";
	}
	
	return 0;
}//main
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
