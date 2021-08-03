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
    std::vector<char> v1(n),v2(n);
    for (int i = 0; i < n; i++){
        std::cin >> v1[i];
    }
    for (int i = 0; i < n; i++){
        std::cin >> v2[i];
    }
    std::sort(v1.begin(),v1.end());
    std::sort(v2.begin(),v2.end());

    bool inc = true, dec = true;

    for (int i = 0; i < n; i++){
        if(v1[i] <= v2[i]){
            inc = false;
        }
    }
    for (int i = 0; i < n; i++){
        if(v1[i] >= v2[i]){
            dec = false;
        }
    }

    if(inc || dec){
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
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
