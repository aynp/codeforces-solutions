//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
// #define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    bool a,b,c,d;
    std::cin >> a >> b >> c >> d;
    
    bool x = ((a^b) & (c|d)) ^ ((b&c) | (a^d));

    std::cout << x;
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}//main
//DUMB
//DONE
// ((a|b)&(c^d))|((b&c)^(a|d))
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
