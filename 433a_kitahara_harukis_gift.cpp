//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,temp;
    std::cin >> n;
    int n100 = 0,n200 = 0;

    while(n--){
        std::cin >> temp;
        if(temp == 100){
            n100++;
        } else {
            n200++;
        }
    }
    
    if(n100&1){
        std::cout << "NO" << '\n';
        return;
    }
    if(n200&1 && n100<2){
        std::cout << "NO" << '\n';
        return;
    }
    std::cout << "YES" << '\n';
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
