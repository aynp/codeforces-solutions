#include <iostream>

int getSum(long long n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }

int gcd(long long a, int b)
{

    if(b == 0) {
            return a;
    }
    else {
        return gcd(b, a % b);
    }
}


long long gcdSum(long long a){
	while(true){
		if(gcd(a, getSum(a)) > 1){
			return a;
		}
		a++;

	}
}

int main(){
	std::ios::sync_with_stdio(false);
	
	int n;
	std::cin >> n;
	long long a;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a;
		std::cout << gcdSum(a) << "\n";
	}
	
	return 0;
}//main
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
