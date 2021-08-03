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

    n=n-10;
    if (n <= 0 || n > 11 ){
        std::cout << 0 << '\n';
        return;
    }
    if (n<10 || n == 11){
        std::cout << 4 << '\n';
        return;
    }
    std::cout << 15 << '\n';
    return;    
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
//lol it took 5 tries :'(
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
