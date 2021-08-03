#include <iostream>

int main(){
	int n;
	std::cin >> n;
	int num[n];
	int odd = 0, even = 0;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> num[i];
	}
	for (int i = 0; i < 3; ++i)
	{
		if (num[i]%2 == 1)
		{
			odd++;
		}
		else
			even++;
	}
	even = true;
	if (odd > even)
	{
		even = false;
	}

	for (int i = 0; i < n; i++)
	{
		if (num[i]%2 == even)
		{
			std::cout << i+1 << "\n";
			return 0;
		}
	}
	
	return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
