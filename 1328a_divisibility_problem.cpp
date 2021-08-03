//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,m;
    std::cin >> n >> m;
    if(n%m == 0){
        std::cout << 0 << '\n';
        return;
    }
    std::cout << m - n%m << '\n';
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
}//main
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
