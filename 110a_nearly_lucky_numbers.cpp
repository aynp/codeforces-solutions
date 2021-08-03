//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    std::string n;
    std::cin >> n;
    int count = 0;

    for (auto &&i : n){
        if (i == '4' || i == '7'){
            count++;
        }
    }
    if (count == 4 || count == 7){
        std::cout << "YES" << '\n';
        return;
    }
    std::cout << "NO" << '\n';   
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
