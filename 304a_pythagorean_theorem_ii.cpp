//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,a,b,cnt = 0;
    ld c;
    std::cin >> n;

    for (a = 1; a <= n; a++)
	{
		for (b =a + 1; b <= n; b++)
		{
			c = a*a + b*b;
			c = sqrt(c);

			if (floor(c) == c && c <= n)
				cnt++;
		}
	}
    std::cout << cnt << '\n';

}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}//main

//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
