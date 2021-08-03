//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
typedef long long int ll;
using namespace std;

void solve(){
	ll n;
	std::cin >> n;

	std::string s;
	std::map<string, int> map;
	for (int i = 0; i < n; i++){
		std::cin >> s;
		map[s]++;
		if (map[s]==1) {
			std::cout << "OK" << "\n";
		} else {
			std::cout << s << map[s]-1 << "\n";
		}
	}

}//solve

int main(){
	std::ios::sync_with_stdio(0);
    std::cin.tie(0);
	
	solve();	

	return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
