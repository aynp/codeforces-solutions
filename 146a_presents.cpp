//@aryanpathania

#include <iostream>

int main(){
	std::ios::sync_with_stdio(false);
	
	int n;
	std::cin >> n;
	int arr[n];
	int arr_given[n];
	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
		arr_given[arr[i]-1] = i+1;
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << arr_given[i] << " ";
		
	}
	
	return 0;
}//main
//Done
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
