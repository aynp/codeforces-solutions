//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n, x, t;
    std::cin >> n >> x >> t;
    int dist = max(0l,n-t/x)*t/x + min((n−1),(t/x − 1));
    std::cout << n*(t/x) - ((t/x)*(t/x + 1))/2 << "\n";
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcases;
    std::cin >> testcases;
    
    while(testcases--) {
        solve();
    }

    return 0;
}
// 4(5/2) -3
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
