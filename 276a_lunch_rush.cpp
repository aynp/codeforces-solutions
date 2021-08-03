//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,k;
    std::cin >> n >> k;
    int fun = 0, max = INT_MIN;
    int f,t;
    while(n--){
        std::cin >> f >> t;
        if (t >= k){
            fun = f - (t-k);
        } else {
            fun = f;
        }
        if(fun > max){
            max = fun;
        }
        // std::cout << max << " ";
    }
    std::cout << max << '\n';
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
