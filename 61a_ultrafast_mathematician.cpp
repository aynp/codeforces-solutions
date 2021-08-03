//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    std::string s1,s2;
    std::cin >> s1 >> s2;
    
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == s2[i]){
            std::cout << 0;
        } else {
            std::cout << 1;
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
