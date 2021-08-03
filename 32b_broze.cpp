//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    std::string s;
    std::cin >> s;
    int n = s.length();

    for (int i = 0; i < n; i++){
        if(s[i] == '-'){
            if(s[i+1] == '.'){
                std::cout << 1;
            } else {
                std::cout << 2;
            }
            i++;
            continue;
        } else{
            std::cout << 0;
        }

    }
    
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
