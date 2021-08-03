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
    
    int sum = 0, count = 0;
    while (s.length() > 1){
        sum = 0;
        for (auto &&i : s){
            sum = sum + i - '0';
        }
        s = to_string(sum);
        count++;
    }
    std::cout << count << '\n';

    /*if (s.length() < 2){
        std::cout << 0 << '\n';
        return;
    }
    
    int sum = INT_MAX, count = 0;
    while (sum > 9)
    {
        int temp = 0;
        for (auto &&i : s){
            temp = temp + i - '0';
        }
        sum = temp; 
        s = to_string(sum);
        count++;
        // std::cout << sum << '\n';
    }
    std::cout << count << '\n';*/
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
