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

    std::map<string,int> m;
    string temp;
    while(n--){
        std::cin >> temp;
        m[temp]++;
    }
    int max_freq = 0;
    for (auto &&i : m){
        if(max_freq < i.second){
            temp = i.first;
            max_freq = i.second;
        }
    }
    std::cout << temp << '\n';
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
