//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;
	
	std::map<char,int> m;
	char temp;
	for (auto &&i : s){
		m[i]++;
	}
	string ans = "";

	for (auto &&i : m){
		if (i.second%n){
			std::cout << -1 << '\n';
			return;
		}
	}
	for (int element = 0; element < n; element++){
		for (auto &&i : m){		
			for (int j = 0; j < (i.second)/n; j++)
			{
				std::cout << i.first;
			}
		}
	}
	
	
	
}

int32_t main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	solve();

	return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
