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
    std::string s;
    std::map<std::string, int> m;
    cin.ignore();
    for(int i = 0; i<n; i++){
        getline(cin, s);
        m[s]++;
    }

    int max = 0;
    for (auto &&i : m)
    {
        if(i.second > max){
            max = i.second;
        }
    }
    std::cout << max << '\n';
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
