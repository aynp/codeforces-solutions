#include <iostream>

long long power(long long a, long long n){
	long long res = 1;
	while(n){
		if(n&1){
			res = res*a%1000000007;
			n--;
		} else{
			a = a*a%1000000007;
			n = n/2;
		}
	}
	return res;
}

int main(){
	std::ios::sync_with_stdio(false);
	
	int testcases;
	std::cin >> testcases;
	
	for(int test=0; test<testcases; test++){
		long long n,k;
		std::cin >> n >> k;

		std::cout << power(n,k) << "\n";
		
	}//testcases
		
	return 0;
}//main

/*
In binary
   16 8 4 2 1 0
i1  0 0 0 0 0 0
i2	1 1 1 1 1 0
i3	1 1 1 1 1 0
i4 	1 1 1 1 1 0

For maximum sum EXACTLY one bit at same position of numbers has to be zero...
so number of ways to do it 
4*4*4*4*4
(4 options to place 0) for every bit
therefore solution = n^k;

k -> number of bits
*/
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
