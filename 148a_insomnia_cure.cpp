#include <iostream>

int main(){
	std::ios::sync_with_stdio(false);
	
	int k,l,m,n,d;
	std::cin >> k >> l >> m >> n >> d;
	int count = 0;
	for (int i = 1; i <= d; ++i)
	{
		if (i%k == 0 || i%l == 0 || i%m == 0 || i%n ==0)
		{
			count ++;
		}
	}
	std::cout << count << "\n";

	return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
