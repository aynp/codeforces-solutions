#include <iostream>

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	std::cin >> t;
	int n, k;
	for (int i = 0; i < t; i++){
		std::cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++){
			std::cin >> arr[i];
		}
		int pointer = 0, lpointer = n-1;
		int count = 0;

		while (count < k) {
			if (arr[pointer] > 0)
			{
				arr[pointer]--;
				arr[lpointer]++;
				count ++;
			}
			if (arr[pointer] == 0)
			{	
				pointer++;
			}
			if (pointer == n-1)
			{
				break;
			}
		}

		for (int j = 0; j < n; j++){
			std::cout << arr[j] << " ";
		}

		std::cout << "\n";
	}
	
	return 0;
}//main
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
