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

    std::cout << (s.length()*(s.length()+1))/2 + ((s[0]-'0')-1)*10 << "\n";
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcases;
    std::cin >> testcases;

    for (int i = 0; i < testcases; i++){
        solve();
    }
    

    return 0;
}
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
