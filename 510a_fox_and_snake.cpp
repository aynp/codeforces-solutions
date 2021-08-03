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
    for (int i = 1; i <= n; i++){
        if(i&1){
            for (int j = 0; j < m; j++){
                std::cout << '#';
            }
            std::cout << '\n';
            continue;
        }
        if(i%4 == 0){
            std::cout << '#';
            for (int i = 0; i < m-1; i++){
                std::cout << '.';
            }
            std::cout << '\n';
            continue;
        }
        for (int i = 0; i < m-1; i++){
            std::cout << '.';
        }
        std::cout << '#' << '\n';
    }
    
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
