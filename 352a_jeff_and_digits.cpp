#include <iostream>

int main(){
	int n;
	std::cin >> n;
	int num[n];
	int fives = 0 , zeros = 0;
	
	for (int i = 0; i < n; ++i)
	{
		std::cin >> num[i];
		if (num[i]==0)
		{
			zeros++;
		}
		if (num[i]==5)
		{
			fives++;
		}

	}
	int five_group = fives/9;	

	if (zeros == 0)
	{
		std::cout << -1 << "\n";
		return 0;
	}

	if (five_group == 0)
	{
		std::cout << 0 << "\n";
		return 0;
	}

	for (int i = 0; i < five_group; ++i)
	{
		std::cout << 555555555;
	}
	for (int i = 0; i < zeros; ++i)
	{
		std::cout << 0;
		
	}


	return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
