//DONE

#include <iostream>

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	std::cin >> t;
	long long int m, n, x, a, b;
	for (int i = 0; i < t; ++i)
		{
			std::cin >> n >> m >> x;
			a = (x-1)/n + 1;

			b = x%n;
			if (b==0)
				b = n;

			if(x == m*n)
				std::cout << x << "\n";
			else
				std::cout << m*(b-1) + a << "\n";	
		}	
	
	return 0;
}//main
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
