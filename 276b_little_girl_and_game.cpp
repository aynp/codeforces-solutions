//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,m,k,p,q,r;
    std::string s;
    std::cin >> s;
    std::map<char, int> mp;
    for (int i = 0; i < s.length(); i++){
        mp[s[i]]++;
    }
    int odd = 0;
    for (auto &&i : mp){
        if(i.second & 1){
            odd++;
        }
    }
    if(odd%2 == 0 && odd > 1){
        std::cout << "Second" << '\n';
        return;
    }
    std::cout << "First" << '\n';
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
