//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

const int MAX = 1'000'000;
std::vector<bool> prime(MAX+1,true);
//Either I could check for every number if it is a perfect square of prime number
//or I can make a set and check if the exect number is present in it or not 
std::set<int> s;

//If a number is prime then set all it's multiples to be non peime
void SieveOfEratosthenes() {
    for (int p = 2; p <= MAX; p++){
        if (prime[p] == true){
			s.insert(p*p);
			// std::cout << p << '\n';

            for (int i = p * p; i <= MAX; i += p)	//we start from square of that number as all multiples 
													//before square of that number would already be makred
                prime[i] = false;
        }
    }
}

void solve() {
	int n;
	std::cin >> n;

	if (s.find(n)!=s.end()){
		std::cout << "YES" << '\n';
		return;
	}
	std::cout << "NO" << '\n';
	
}

int32_t main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int testcases;
	std::cin >> testcases;
	SieveOfEratosthenes();
	while(testcases--) {
		solve();
	}

	return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
