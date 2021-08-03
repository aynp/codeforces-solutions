//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int a,b,c;
    std::cin >> a >> b;
    c = a + b;
    string str_a = to_string(a);
    string str_b = to_string(b);
    string str_c = to_string(c);

    str_a.erase(remove(str_a.begin(),str_a.end(), '0'),str_a.end());
    str_b.erase(remove(str_b.begin(),str_b.end(), '0'),str_b.end());
    str_c.erase(remove(str_c.begin(),str_c.end(), '0'),str_c.end());

    if (stoi(str_a) + stoi(str_b) == stoi(str_c)){
        std::cout <<"YES" << '\n';
    }
    else {
        // std::cout << str_a << " " << str_b << " " << str_c << '\n';
        std::cout << "NO" << '\n';
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
