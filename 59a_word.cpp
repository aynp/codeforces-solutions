//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    string s;
    std::cin >> s;
    
    int n = s.length();
    int uc = 0;

    for (auto &&i : s){
        if (i < 91){
            uc++;
        }
    }
    if (uc > n/2)
    {
        std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else {
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    std::cout << s << '\n';
    
    
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
