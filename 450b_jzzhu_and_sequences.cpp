//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int x,y,n;
    std::cin >> x >> y >> n;
    if(n%6 == 0){
        std::cout << (MOD+((x-y)%MOD))%MOD << '\n';
    }
    if(n%6 == 1){
        std::cout << (MOD+(x%MOD))%MOD << '\n';
    }
    if(n%6 == 2){
        std::cout << (MOD+(y%MOD))%MOD << '\n';
    }
    if(n%6 == 3){
        std::cout << (MOD+((y-x)%MOD))%MOD << '\n';
    }
    if(n%6 == 4){
        std::cout << (MOD+(-x%MOD))%MOD << '\n';
    }
    if(n%6 == 5){
        std::cout << (MOD+(-y%MOD))%MOD << '\n';
    }
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}//main
// x, y, y-x, -x, -y, x
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
