#include <iostream>

int main(){
	std::ios::sync_with_stdio(false);
	
	int n;
	std::cin >> n;
	int height[n];
	int max, min, maxI=0, minI=0;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> height[i];

		if (i == 0)
		{
			max = height[0];
			min = height[0];
		}

		if (max < height[i])
		{
			maxI = i;
			max = height[i];
		}
		if (min >= height[i])
		{
			minI = i;
			min = height[i];
		}
	}
	if (maxI > minI)
		std::cout << maxI-1 + (n - minI) - 1;
	else
		std::cout << maxI-1 + (n - minI);
	return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
